
// This is the answer to ex4


#include <iomanip>

#include "systemc"
using namespace sc_core;
using namespace sc_dt;
using namespace std;

#include "tlm.h"

#include "../common/mm.h"

// Initiator module generating generic payload transactions

struct Initiator: sc_module, tlm::tlm_bw_transport_if<>
{
  // TLM-2 socket, defaults to 32-bits wide, base protocol
  tlm::tlm_initiator_socket<> socket;

  SC_CTOR(Initiator)
  : socket("socket")  // Construct and name socket
  {
    socket.bind(*this);
    SC_THREAD(thread_process);

    // Initialize the data and byte enable buffers
    data[0] = 0xdeadbeefdeaffeedull;
    data[1] = 0x0bad0bed0fab0fadull;
    byte_enable = 0x00ffffff;
  }

  void thread_process()
  {
    // TLM-2 generic payload transaction, reused across calls to b_transport
    tlm::tlm_generic_payload* trans;
    sc_time delay = SC_ZERO_TIME;

    // Generate a sequence of write bursts
    for (int addr = 0; addr < 64; addr += 8)
    {
      tlm::tlm_command cmd = tlm::TLM_WRITE_COMMAND;

       // Grab a new transaction from the memory manager
      trans = m_mm.allocate();
      trans->acquire();

      trans->set_command( cmd );
      trans->set_address( addr );
      trans->set_data_ptr( reinterpret_cast<unsigned char*>(&data) );
      trans->set_data_length( 16 );
      trans->set_streaming_width( 4 );
      trans->set_byte_enable_ptr( reinterpret_cast<unsigned char*>(&byte_enable) );
      trans->set_byte_enable_length( 4 );
      trans->set_dmi_allowed( false );
      trans->set_response_status( tlm::TLM_INCOMPLETE_RESPONSE ); // Mandatory initial value

      socket->b_transport( *trans, delay );  // Blocking transport call

      // Initiator obliged to check response status and delay
      if ( trans->is_response_error() )
        SC_REPORT_ERROR("TLM-2", "Response error from b_transport");

      cout << "Completed " << (cmd ? "write" : "read") << ", addr = " << hex << addr
           << " at " << sc_time_stamp() << endl;

      // Release the transaction when it is complete so the memory manager can reuse it
      trans->release();
    }
  }

  // TLM-2 backward non-blocking transport method
  virtual tlm::tlm_sync_enum nb_transport_bw( tlm::tlm_generic_payload& trans,
                                              tlm::tlm_phase& phase, sc_time& delay )
  {
    // Dummy method
    return tlm::TLM_ACCEPTED;
  }

  // TLM-2 backward DMI method
  virtual void invalidate_direct_mem_ptr(sc_dt::uint64 start_range,
                                         sc_dt::uint64 end_range)
  {
    // Dummy method
  }

  // Internal data buffer used by initiator with generic payload
  sc_dt::uint64 data[2];
  int byte_enable;

  // Memory manager
  mm m_mm;
};


// Target module representing a simple memory

struct Target: sc_module, tlm::tlm_fw_transport_if<>
{
  // TLM-2 socket, defaults to 32-bits wide, base protocol
  tlm::tlm_target_socket<> socket;

  SC_CTOR(Target)
  : socket("socket")
  {
    socket.bind(*this);
  }

  // TLM-2 blocking transport method
  virtual void b_transport( tlm::tlm_generic_payload& trans, sc_time& delay )
  {
    tlm::tlm_command cmd = trans.get_command();
    sc_dt::uint64    adr = trans.get_address();
    unsigned char*   ptr = trans.get_data_ptr();
    unsigned int     len = trans.get_data_length();
    unsigned char*   byt = trans.get_byte_enable_ptr();
    unsigned int     bel = trans.get_byte_enable_length();
    unsigned int     wid = trans.get_streaming_width();

    // Check the transaction object is only using supported operations

    if (cmd != tlm::TLM_WRITE_COMMAND) {
      trans.set_response_status( tlm::TLM_COMMAND_ERROR_RESPONSE );
      return;
    }
    if (adr % 4 != 0) {
      trans.set_response_status( tlm::TLM_ADDRESS_ERROR_RESPONSE );
      return;
    }
    if (len % 4 != 0) {
      trans.set_response_status( tlm::TLM_BURST_ERROR_RESPONSE );
      return;
    }
    if (wid != 4) {
      trans.set_response_status( tlm::TLM_BURST_ERROR_RESPONSE );
      return;
    }

    if (trans.has_mm())
      cout << "Transaction has a memory manager, address = " << &trans
           << ", ref_count = " << trans.get_ref_count() << "\n";
    else
      cout << "Transaction has no memory manager, address = " << &trans << "\n";


    if ( cmd == tlm::TLM_WRITE_COMMAND )
    {
      for (int i = 0; i < int(len); i += 4)
      {
        cout << "addr = " << adr << ", data = ";
        for (int j = 3; j >= 0; j--)
          cout << hex << setw(2) << setfill('0') << int(ptr[i+j]);
        cout << ", byte enables = ";
        if (bel)
          for (int j = 3; j >= 0; j--)
            cout << hex << setw(2) << setfill('0') << int(byt[(i+j) % bel]);
        else
          cout << "00000000";
        cout << "\n";
      }
    }

    trans.set_response_status( tlm::TLM_OK_RESPONSE );


    // Diagnostic code to help with the debugging of the exercise
    // If any of these assertions fail, your solution is wrong!
    assert (cmd == tlm::TLM_WRITE_COMMAND);
    assert (adr % 4 == 0);
    assert (len == 16);
    assert (wid == 4);
    assert ((bel == 4) || (bel == 8) || (bel == 12) || (bel == 16));
    for (unsigned int i = 0; i < bel; i++)
      if ((i % 4) == 3)
        assert (byt[i] == 0x00);
      else
        assert (byt[i] == 0xff);
  }

  // TLM-2 forward non-blocking transport method
  virtual tlm::tlm_sync_enum nb_transport_fw( tlm::tlm_generic_payload& trans,
                                              tlm::tlm_phase& phase, sc_time& delay )
  {
    // Dummy method (not TLM-2.0 compliant)
    return tlm::TLM_ACCEPTED;
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
};


SC_MODULE(Top)
{
  Initiator *initiator;
  Target    *target;

  SC_CTOR(Top)
  {
    // Instantiate components
    initiator = new Initiator("initiator");
    target    = new Target   ("target");

    // One initiator is bound directly to one target with no intervening bus

    // Bind initiator socket to target socket
    initiator->socket.bind( target->socket );
  }
};


int sc_main(int argc, char* argv[])
{
  Top top("top");
  sc_start();
  return 0;
}

