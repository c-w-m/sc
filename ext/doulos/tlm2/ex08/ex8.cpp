
// This is the answer to Ex8

#include <fstream>
#include <iomanip>
#include <map>

#define SC_INCLUDE_DYNAMIC_PROCESSES

#include "systemc"
using namespace sc_core;
using namespace sc_dt;
using namespace std;

#include "tlm.h"
#include "tlm_utils/peq_with_cb_and_phase.h"
#include "tlm_utils/simple_initiator_socket.h"
#include "tlm_utils/simple_target_socket.h"
#include "tlm_utils/multi_passthrough_initiator_socket.h"
#include "tlm_utils/multi_passthrough_target_socket.h"
#include "tlm_utils/instance_specific_extensions.h"

#include "../common/mm.h"
#include "../common/tlm2_base_protocol_checker.h"


static ofstream fout("ex8.log");

// Generate a random delay (with power-law distribution) to aid testing and stress the protocol
int rand_ps()
{
  int n = rand() % 100;
  n = n * n * n;
  return n / 100;
}

struct diag_extension: tlm::tlm_extension<diag_extension>
{
  diag_extension() {}

  virtual tlm_extension_base* clone() const
  {
    diag_extension* ext = new diag_extension;
    ext->initiator_process = this->initiator_process;
    ext->start_time        = this->start_time;
    return ext;
  }

  virtual void copy_from(tlm_extension_base const &ext)
  {
    initiator_process = static_cast<diag_extension const &>(ext).initiator_process;
    start_time        = static_cast<diag_extension const &>(ext).start_time;
  }

  sc_core::sc_process_handle  initiator_process;
  sc_core::sc_time            start_time;
};



// **************************************************************************************
// Initiator module generating multiple pipelined generic payload transactions
// **************************************************************************************

struct Initiator: sc_module
{
  // TLM-2 socket, defaults to 32-bits wide, base protocol
  tlm_utils::simple_initiator_socket<Initiator> socket;

  SC_CTOR(Initiator)
  : socket("socket")  // Construct and name socket
  , request_in_progress(0)
  , m_peq(this, &Initiator::peq_cb)
  {
    socket.register_nb_transport_bw(this, &Initiator::nb_transport_bw);

    SC_THREAD(thread_process);
  }

  void thread_process()
  {
    tlm::tlm_generic_payload* trans;
    tlm::tlm_phase phase;
    sc_time delay;

    // Generate a sequence of random transactions
    for (int i = 0; i < 100; i++)
    {
      int adr = rand();
      tlm::tlm_command cmd = static_cast<tlm::tlm_command>(rand() % 2);
      if (cmd == tlm::TLM_WRITE_COMMAND) data[i % 16] = adr;

      // Grab a new transaction from the memory manager
      trans = m_mm.allocate();
      trans->acquire();

      trans->set_command( cmd );
      trans->set_address( adr );
      trans->set_data_ptr( reinterpret_cast<unsigned char*>(&data[i % 16]) );
      trans->set_data_length( 4 );
      trans->set_streaming_width( 4 );
      trans->set_byte_enable_ptr( 0 );
      trans->set_dmi_allowed( false );
      trans->set_response_status( tlm::TLM_INCOMPLETE_RESPONSE );

      // Initiator must honor BEGIN_REQ/END_REQ exclusion rule
      if (request_in_progress)
        wait(end_request_event);
      request_in_progress = trans;
      phase = tlm::BEGIN_REQ;

      // Timing annotation models processing time of initiator prior to call
      delay = sc_time(rand_ps(), SC_PS);

// **************************************************************************************
      // If transaction does not yet have a diagnostic extension, add a sticky extension
      diag_extension* ext = trans->get_extension<diag_extension>();
      if (!ext)
      {
        ext = new diag_extension;
        trans->set_extension(ext);
      }
      ext->initiator_process = sc_get_current_process_handle();
      ext->start_time        = sc_time_stamp() + delay;
// **************************************************************************************

      fout << hex << adr << " new, cmd=" << (cmd ? "write" : "read")
           << ", data=" << hex << data[i % 16] << " at time " << sc_time_stamp() + delay
           << " in " << name() << endl;

      // Non-blocking transport call on the forward path
      tlm::tlm_sync_enum status;
      status = socket->nb_transport_fw( *trans, phase, delay );

      // Check value returned from nb_transport_fw
      if (status == tlm::TLM_UPDATED)
      {
        // The timing annotation must be honored
        m_peq.notify( *trans, phase, delay );
      }
      else if (status == tlm::TLM_COMPLETED)
      {
        // The completion of the transaction necessarily ends the BEGIN_REQ phase
        request_in_progress = 0;

        // The target has terminated the transaction
        check_transaction( *trans );

        // Allow the memory manager to free the transaction object
        trans->release();
      }
      wait( sc_time(rand_ps(), SC_PS) );
    }
  }

  // TLM-2 backward non-blocking transport method

  virtual tlm::tlm_sync_enum nb_transport_bw( tlm::tlm_generic_payload& trans,
                                              tlm::tlm_phase& phase, sc_time& delay )
  {
    m_peq.notify( trans, phase, delay );
    return tlm::TLM_ACCEPTED;
  }

  // Payload event queue callback to handle transactions from target
  // Transaction could have arrived through return path or backward path

  void peq_cb(tlm::tlm_generic_payload& trans, const tlm::tlm_phase& phase)
  {
    if (phase == tlm::END_REQ || (&trans == request_in_progress && phase == tlm::BEGIN_RESP))
    {
      // The end of the BEGIN_REQ phase
      request_in_progress = 0;
      end_request_event.notify();
    }
    else if (phase == tlm::BEGIN_REQ || phase == tlm::END_RESP)
      SC_REPORT_FATAL("TLM-2", "Illegal transaction phase received by initiator");

    if (phase == tlm::BEGIN_RESP)
    {
      check_transaction( trans );

      // Send final phase transition to target
      tlm::tlm_phase fw_phase = tlm::END_RESP;
      sc_time delay = sc_time(rand_ps(), SC_PS);
      socket->nb_transport_fw( trans, fw_phase, delay );
      // Ignore return value

      // Allow the memory manager to free the transaction object
      trans.release();
    }
  }

  // Called on receiving BEGIN_RESP or TLM_COMPLETED
  void check_transaction(tlm::tlm_generic_payload& trans)
  {
    if ( trans.is_response_error() )
    {
      char txt[100];
      sprintf(txt, "Transaction returned with error, response status = %s",
                   trans.get_response_string().c_str());
      SC_REPORT_ERROR("TLM-2", txt);
    }

    tlm::tlm_command cmd = trans.get_command();
    sc_dt::uint64    adr = trans.get_address();
    int*             ptr = reinterpret_cast<int*>( trans.get_data_ptr() );

    fout << hex << adr << " check, cmd=" << (cmd ? "write" : "read")
         << ", data=" << hex << *ptr << " at time " << sc_time_stamp()
         << " in " << name() << endl;

    if (cmd == tlm::TLM_READ_COMMAND)
      assert( *ptr == -int(adr) );
  }

  mm   m_mm;
  int  data[16];
  tlm::tlm_generic_payload* request_in_progress;
  sc_event end_request_event;
  tlm_utils::peq_with_cb_and_phase<Initiator> m_peq;
};


// **************************************************************************************
// Dumb interconnect that routes through transactions as follows
// offset == 1
//   init[0] -> targ[1]
//   init[1] -> targ[2]
//   init[2] -> targ[3]
//   init[3] -> targ[0]
// offset == 2
//   init[0] -> targ[2]
//   init[1] -> targ[3]
//   init[2] -> targ[0]
//   init[3] -> targ[1]
// and so on
// **************************************************************************************

struct Interconnect: sc_module
{
  tlm_utils::multi_passthrough_target_socket<Interconnect, 32>    targ_socket;
  tlm_utils::multi_passthrough_initiator_socket<Interconnect, 32> init_socket;

  Interconnect(sc_module_name _name, unsigned int _offset)
  : sc_module(_name)
  , targ_socket("targ_socket")
  , init_socket("init_socket")
  , offset(_offset)
  {
    targ_socket.register_b_transport              (this, &Interconnect::b_transport);
    targ_socket.register_nb_transport_fw          (this, &Interconnect::nb_transport_fw);
    targ_socket.register_get_direct_mem_ptr       (this, &Interconnect::get_direct_mem_ptr);
    targ_socket.register_transport_dbg            (this, &Interconnect::transport_dbg);
    init_socket.register_nb_transport_bw          (this, &Interconnect::nb_transport_bw);
    init_socket.register_invalidate_direct_mem_ptr(this, &Interconnect::invalidate_direct_mem_ptr);
  }

  void end_of_elaboration()
  {
    if ( targ_socket.size() != init_socket.size() )
      SC_REPORT_ERROR("TLM-2", "#initiators != #targets in Interconnect");
  }

  // Forward interface

  virtual void b_transport( int id, tlm::tlm_generic_payload& trans, sc_time& delay )
  {
    unsigned int target = (id + offset) % init_socket.size(); // Route-through

    init_socket[target]->b_transport( trans, delay );
  }


// **************************************************************************************
  struct route_extension: tlm_utils::instance_specific_extension<route_extension>
  {
    int id;
  };

  tlm_utils::instance_specific_extension_accessor accessor;
// **************************************************************************************

  virtual tlm::tlm_sync_enum nb_transport_fw( int id, tlm::tlm_generic_payload& trans,
                                              tlm::tlm_phase& phase, sc_time& delay )
  {
// **************************************************************************************
    route_extension* ext;
    if (phase == tlm::BEGIN_REQ)
    {
      ext = new route_extension;
      ext->id = id;
      accessor(trans).set_extension(ext);
    }
// **************************************************************************************

    unsigned int target = (id + offset) % init_socket.size(); // Route-through

    tlm::tlm_sync_enum status;
    status = init_socket[target]->nb_transport_fw( trans, phase, delay );

// **************************************************************************************
    if (status == tlm::TLM_COMPLETED)
    {
      accessor(trans).clear_extension(ext);
      delete ext;
    }
// **************************************************************************************

    return status;
  }

  virtual bool get_direct_mem_ptr( int id, tlm::tlm_generic_payload& trans,
                                           tlm::tlm_dmi& dmi_data)
  {
    unsigned int target = (id + offset) % init_socket.size(); // Route-through

    bool status = init_socket[target]->get_direct_mem_ptr( trans, dmi_data );

    return status;
  }

  virtual unsigned int transport_dbg( int id, tlm::tlm_generic_payload& trans )
  {
    unsigned int target = (id + offset) % init_socket.size(); // Route-through

    return init_socket[target]->transport_dbg( trans );
  }


  // Backward interface

  virtual tlm::tlm_sync_enum nb_transport_bw( int id, tlm::tlm_generic_payload& trans,
                                              tlm::tlm_phase& phase, sc_time& delay )
  {
// **************************************************************************************
    route_extension* ext;
    accessor(trans).get_extension(ext);
    assert(ext);

    tlm::tlm_sync_enum status;
    status = targ_socket[ ext->id ]->nb_transport_bw( trans, phase, delay );

    if (status == tlm::TLM_COMPLETED)
    {
      accessor(trans).clear_extension(ext);
      delete ext;
    }
// **************************************************************************************

    return status;
  }

  virtual void invalidate_direct_mem_ptr( int id, sc_dt::uint64 start_range,
                                                  sc_dt::uint64 end_range )
  {
    // Propagate call backward to all initiators
    for (unsigned int i = 0; i < targ_socket.size(); i++)
      targ_socket[i]->invalidate_direct_mem_ptr(start_range, end_range);
  }

  unsigned int offset;
};


// **************************************************************************************
// Target module able to buffer a second request before sending a response to the first
// **************************************************************************************

struct Target: sc_module
{
  // TLM-2 socket, defaults to 32-bits wide, base protocol
  tlm_utils::simple_target_socket<Target> socket;

  SC_CTOR(Target)
  : socket("socket")
  , transaction_in_progress(0)
  , response_in_progress(false)
  , next_response_pending(0)
  , end_req_pending(0)
  , m_peq(this, &Target::peq_cb)
  {
    socket.register_b_transport    (this, &Target::b_transport);
    socket.register_nb_transport_fw(this, &Target::nb_transport_fw);

    SC_METHOD(execute_transaction_process);
      sensitive << target_done_event;
      dont_initialize();
  }

  virtual void b_transport( tlm::tlm_generic_payload& trans, sc_time& delay )
  {
    // Execute the read or write commands
    execute_transaction(trans);
  }


  // TLM-2 non-blocking transport method
  virtual tlm::tlm_sync_enum nb_transport_fw( tlm::tlm_generic_payload& trans,
                                              tlm::tlm_phase& phase, sc_time& delay )
  {
    // Queue the transaction until the annotated time has elapsed
    m_peq.notify( trans, phase, delay);
    return tlm::TLM_ACCEPTED;
  }

  void peq_cb(tlm::tlm_generic_payload& trans, const tlm::tlm_phase& phase)
  {
    sc_time delay;

    switch (phase) {
    case tlm::BEGIN_REQ:

      // Increment the transaction reference count
      trans.acquire();

      if ( !transaction_in_progress )
        send_end_req(trans);
      else
        // Put back-pressure on initiator by deferring END_REQ until pipeline is clear
        end_req_pending = &trans;

      break;

    case tlm::END_RESP:
      // On receiving END_RESP, the target can release the transaction
      // and allow other pending transactions to proceed

      if (!response_in_progress)
        SC_REPORT_FATAL("TLM-2", "Illegal transaction phase END_RESP received by target");

      transaction_in_progress = 0;

      // Target itself is now clear to issue the next BEGIN_RESP
      response_in_progress = false;
      if (next_response_pending)
      {
        send_response( *next_response_pending );
        next_response_pending = 0;
      }

      // ... and to unblock the initiator by issuing END_REQ
      if (end_req_pending)
      {
        send_end_req( *end_req_pending );
        end_req_pending = 0;
      }

      break;

    case tlm::END_REQ:
    case tlm::BEGIN_RESP:
      SC_REPORT_FATAL("TLM-2", "Illegal transaction phase received by target");
      break;
    }
  }

  void send_end_req(tlm::tlm_generic_payload& trans)
  {
    tlm::tlm_phase bw_phase;
    sc_time delay;

    // Queue the acceptance and the response with the appropriate latency
    bw_phase = tlm::END_REQ;
    delay = sc_time(rand_ps(), SC_PS); // Accept delay

    tlm::tlm_sync_enum status = socket->nb_transport_bw( trans, bw_phase, delay );
    // Ignore return value; initiator cannot terminate transaction at this point

    // Queue internal event to mark beginning of response
    delay = delay + sc_time(rand_ps(), SC_PS); // Latency
    target_done_event.notify( delay );

    assert(transaction_in_progress == 0);
    transaction_in_progress = &trans;
  }

  // Method process that runs on target_done_event
  void execute_transaction_process()
  {
    // Execute the read or write commands
    execute_transaction( *transaction_in_progress );

    // Target must honor BEGIN_RESP/END_RESP exclusion rule
    // i.e. must not send BEGIN_RESP until receiving previous END_RESP or BEGIN_REQ
    if (response_in_progress)
    {
      // Target allows only two transactions in-flight
      if (next_response_pending)
        SC_REPORT_FATAL("TLM-2", "Attempt to have two pending responses in target");
      next_response_pending = transaction_in_progress;
    }
    else
      send_response( *transaction_in_progress );
  }

  // Common to b_transport and nb_transport
  void execute_transaction(tlm::tlm_generic_payload& trans)
  {
    tlm::tlm_command cmd = trans.get_command();
    sc_dt::uint64    adr = trans.get_address();
    unsigned char*   ptr = trans.get_data_ptr();
    unsigned int     len = trans.get_data_length();
    unsigned char*   byt = trans.get_byte_enable_ptr();
    unsigned int     wid = trans.get_streaming_width();

    if (byt != 0) {
      trans.set_response_status( tlm::TLM_BYTE_ENABLE_ERROR_RESPONSE );
      return;
    }
    if (len > 4 || wid < len) {
      trans.set_response_status( tlm::TLM_BURST_ERROR_RESPONSE );
      return;
    }

    if ( cmd == tlm::TLM_READ_COMMAND )
    {
      *reinterpret_cast<int*>(ptr) = -int(adr);
      fout << hex << adr << " execute read, data = " << *reinterpret_cast<int*>(ptr)
           << " in " << name() << endl;
    }
    else if ( cmd == tlm::TLM_WRITE_COMMAND )
    {
      fout << hex << adr << " execute write, data = " << *reinterpret_cast<int*>(ptr)
           << " in " << name() << endl;

      // Check for expected data
      assert( *reinterpret_cast<unsigned int*>(ptr) == adr );
    }

// **************************************************************************************
    // Check for diagnostic extension
    diag_extension* ext = trans.get_extension<diag_extension>();
    if (ext)
      fout << "-- Initiator module = " << ext->initiator_process.get_parent_object()->name()
           << " transaction started at = " << ext->start_time << endl;
// **************************************************************************************

    trans.set_response_status( tlm::TLM_OK_RESPONSE );
  }

  void send_response(tlm::tlm_generic_payload& trans)
  {
    tlm::tlm_sync_enum status;
    tlm::tlm_phase bw_phase;
    sc_time delay;

    response_in_progress = true;
    bw_phase = tlm::BEGIN_RESP;
    delay = SC_ZERO_TIME;
    status = socket->nb_transport_bw( trans, bw_phase, delay );

    if (status == tlm::TLM_UPDATED)
    {
      // The timing annotation must be honored
      m_peq.notify( trans, bw_phase, delay);
    }
    else if (status == tlm::TLM_COMPLETED)
    {
      // The initiator has terminated the transaction
      transaction_in_progress = 0;
      response_in_progress = false;
    }
    trans.release();
  }

  tlm::tlm_generic_payload*  transaction_in_progress;
  sc_event                   target_done_event;
  bool                       response_in_progress;
  tlm::tlm_generic_payload*  next_response_pending;
  tlm::tlm_generic_payload*  end_req_pending;
  tlm_utils::peq_with_cb_and_phase<Target> m_peq;
};


SC_MODULE(Top)
{
  Initiator    *initiator1;
  Initiator    *initiator2;
  Initiator    *initiator3;
  Initiator    *initiator4;

  tlm_utils::tlm2_base_protocol_checker<> *check_init1;
  tlm_utils::tlm2_base_protocol_checker<> *check_init2;
  tlm_utils::tlm2_base_protocol_checker<> *check_init3;
  tlm_utils::tlm2_base_protocol_checker<> *check_init4;

  Interconnect *interconnect1;
  Interconnect *interconnect2;

  tlm_utils::tlm2_base_protocol_checker<> *check_targ1;
  tlm_utils::tlm2_base_protocol_checker<> *check_targ2;
  tlm_utils::tlm2_base_protocol_checker<> *check_targ3;
  tlm_utils::tlm2_base_protocol_checker<> *check_targ4;

  Target       *target1;
  Target       *target2;
  Target       *target3;
  Target       *target4;


  SC_CTOR(Top)
  {
    initiator1    = new Initiator("initiator1");
    initiator2    = new Initiator("initiator2");
    initiator3    = new Initiator("initiator3");
    initiator4    = new Initiator("initiator4");

    check_init1   = new tlm_utils::tlm2_base_protocol_checker<>("check_init1");
    check_init2   = new tlm_utils::tlm2_base_protocol_checker<>("check_init2");
    check_init3   = new tlm_utils::tlm2_base_protocol_checker<>("check_init3");
    check_init4   = new tlm_utils::tlm2_base_protocol_checker<>("check_init4");

    interconnect1 = new Interconnect("interconnect1", 1);
    interconnect2 = new Interconnect("interconnect2", 2);

    check_targ1   = new tlm_utils::tlm2_base_protocol_checker<>("check_targ1");
    check_targ2   = new tlm_utils::tlm2_base_protocol_checker<>("check_targ2");
    check_targ3   = new tlm_utils::tlm2_base_protocol_checker<>("check_targ3");
    check_targ4   = new tlm_utils::tlm2_base_protocol_checker<>("check_targ4");

    target1       = new Target   ("target1");
    target2       = new Target   ("target2");
    target3       = new Target   ("target3");
    target4       = new Target   ("target4");

    initiator1->socket.bind(check_init1->target_socket);
    initiator2->socket.bind(check_init2->target_socket);
    initiator3->socket.bind(check_init3->target_socket);
    initiator4->socket.bind(check_init4->target_socket);

    check_init1->initiator_socket.bind(interconnect1->targ_socket);
    check_init2->initiator_socket.bind(interconnect1->targ_socket);
    check_init3->initiator_socket.bind(interconnect1->targ_socket);
    check_init4->initiator_socket.bind(interconnect1->targ_socket);

    interconnect1->init_socket.bind(interconnect2->targ_socket);
    interconnect1->init_socket.bind(interconnect2->targ_socket);
    interconnect1->init_socket.bind(interconnect2->targ_socket);
    interconnect1->init_socket.bind(interconnect2->targ_socket);

    interconnect2->init_socket.bind(check_targ1->target_socket);
    interconnect2->init_socket.bind(check_targ2->target_socket);
    interconnect2->init_socket.bind(check_targ3->target_socket);
    interconnect2->init_socket.bind(check_targ4->target_socket);

    check_targ1->initiator_socket.bind(target1->socket);
    check_targ2->initiator_socket.bind(target2->socket);
    check_targ3->initiator_socket.bind(target3->socket);
    check_targ4->initiator_socket.bind(target4->socket);
  }
};


int sc_main(int argc, char* argv[])
{
  Top top("top");
  sc_start();
  return 0;
}
