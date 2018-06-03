
// This is the answer to Ex5 Part 2

#include <fstream>
#include <iomanip>

#define SC_INCLUDE_DYNAMIC_PROCESSES

#include "systemc"
using namespace sc_core;
using namespace sc_dt;
using namespace std;

#include "tlm.h"
#include "tlm_utils/peq_with_cb_and_phase.h"

#include "../../common/mm.h"
#include "../../common/tlm2_base_protocol_checker.h"


static ofstream fout("ex5.log");

// Generate a random delay (with power-law distribution) to aid testing and stress the protocol
int rand_ps()
{
  int n = rand() % 100;
  n = n * n * n;
  return n / 100;
}

// **************************************************************************************
// Initiator module generating multiple pipelined generic payload transactions
// **************************************************************************************

struct Initiator: sc_module, tlm::tlm_bw_transport_if<>
{
  // TLM-2 socket, defaults to 32-bits wide, base protocol
  tlm::tlm_initiator_socket<> socket;

  SC_CTOR(Initiator)
  : socket("socket")  // Construct and name socket
  , request_in_progress(0)
  , m_peq(this, &Initiator::peq_cb)
  {
    socket.bind(*this);

    SC_THREAD(thread_process);
  }

  void thread_process()
  {
    tlm::tlm_generic_payload* trans;
    tlm::tlm_phase phase;
    sc_time delay;

    // Generate a sequence of random transactions
    for (int i = 0; i < 1000; i++)
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

      fout << hex << adr << " new, cmd=" << (cmd ? "write" : "read")
           << ", data=" << hex << data[i % 16] << " at time " << sc_time_stamp() << endl;

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
         << ", data=" << hex << *ptr << " at time " << sc_time_stamp() << endl;

    if (cmd == tlm::TLM_READ_COMMAND)
      assert( *ptr == -int(adr) );
  }

  // TLM-2 backward DMI method
  virtual void invalidate_direct_mem_ptr(sc_dt::uint64 start_range,
                                         sc_dt::uint64 end_range)
  {
    // Dummy method
  }

  mm   m_mm;
  int  data[16];
  tlm::tlm_generic_payload* request_in_progress;
  sc_event end_request_event;
  tlm_utils::peq_with_cb_and_phase<Initiator> m_peq;
};


// **************************************************************************************
// Target module that only handles a single request at a time
// **************************************************************************************

struct Target: sc_module, tlm::tlm_fw_transport_if<>
{
  // TLM-2 socket, defaults to 32-bits wide, base protocol
  tlm::tlm_target_socket<> socket;

  SC_CTOR(Target)
  : socket("socket")
  , transaction_in_progress(0)
  , response_in_progress(false)
  , next_response_pending(0)
  , m_peq(this, &Target::peq_cb)
  {
    socket.bind(*this);

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

      // Queue internal event to mark beginning of response
      delay = delay + sc_time(rand_ps(), SC_PS); // Latency
      target_done_event.notify( delay );
      transaction_in_progress = &trans;
      break;

    case tlm::END_RESP:
      // On receiving END_RESP, the target can release the transaction
      // and allow other pending transactions to proceed

      if (!response_in_progress)
        SC_REPORT_FATAL("TLM-2", "Illegal transaction phase END_RESP received by target");

      // Target itself is now clear to issue the next BEGIN_RESP
      response_in_progress = false;
      if (next_response_pending)
      {
        send_response( *next_response_pending );
        next_response_pending = 0;
      }
      break;

    case tlm::END_REQ:
    case tlm::BEGIN_RESP:
      SC_REPORT_FATAL("TLM-2", "Illegal transaction phase received by target");
      break;
    }
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

    // In this case, it is the response exclusion rule that prevents the target from sending
    // BEGIN_RESP, and since the target is not sending any END_REQs, the absence of BEGIN_RESP
    // will hold off the initiator from sending the next BEGIN_REQ.
    // So, we can clear transaction_in_progress at this point without waiting for END_RESP
    transaction_in_progress = 0;
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
      fout << hex << adr << " execute read, data = " << *reinterpret_cast<int*>(ptr) << endl;
    }
    else if ( cmd == tlm::TLM_WRITE_COMMAND )
    {
      fout << hex << adr << " execute write, data = " << *reinterpret_cast<int*>(ptr) << endl;
      // Check for expected data
      assert( *reinterpret_cast<unsigned int*>(ptr) == adr );
    }

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
      response_in_progress = false;
    }
    trans.release();
  }

  // TLM-2 forward DMI method
  virtual bool get_direct_mem_ptr(tlm::tlm_generic_payload& trans,
                                  tlm::tlm_dmi& dmi_data)
  {
    // Dummy method
    return false;
  }

  // TLM-2 debug transport method
  virtual unsigned int transport_dbg(tlm::tlm_generic_payload& trans)
  {
    // Dummy method
    return 0;
  }

  tlm::tlm_generic_payload*  transaction_in_progress;
  sc_event                   target_done_event;
  bool                       response_in_progress;
  tlm::tlm_generic_payload*  next_response_pending;
  tlm_utils::peq_with_cb_and_phase<Target> m_peq;
};


SC_MODULE(Top)
{
  Initiator *initiator;
  Target    *target;

  tlm_utils::tlm2_base_protocol_checker<> *checker;


  SC_CTOR(Top)
  {
    // Instantiate components
    initiator = new Initiator("initiator");
    target    = new Target   ("target");

    checker   = new tlm_utils::tlm2_base_protocol_checker<>("checker");

    // Bind initiator socket to target socket
    initiator->socket.bind(checker->target_socket);
    checker->initiator_socket.bind(target->socket);
  }
};


int sc_main(int argc, char* argv[])
{
  Top top("top");
  sc_start();
  return 0;
}

