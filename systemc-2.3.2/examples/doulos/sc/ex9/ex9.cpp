#define SC_INCLUDE_DYNAMIC_PROCESSES

#include "systemc"
using namespace sc_core;
using namespace std;

#include "tlm.h"
#include "tlm_utils/tlm_quantumkeeper.h"
#include "tlm_utils/simple_initiator_socket.h"
#include "tlm_utils/simple_target_socket.h"

struct Initiator: sc_module
{
  // TLM-2 socket, defaults to 32-bits wide, base protocol
  tlm_utils::simple_initiator_socket<Initiator> socket;

  SC_CTOR(Initiator) : socket("socket")
  {
    SC_THREAD(thread_process);

    // All initiators use a quantum of 1us, that is, they synchronize themselves
    // to simulation time every 1us using the quantum keeper

    m_qk.set_global_quantum( sc_time(1, SC_US) );
    m_qk.reset();
  }

  enum { RUN_LENGTH = 128 };

  void set_base_address(int addr) { base_address = addr; }

  void thread_process()
  {
    tlm::tlm_generic_payload trans;
    sc_time delay;

    for (int i = 0; i < RUN_LENGTH; i += 4)
    {
      int address = base_address + (i % 128);
      tlm::tlm_command cmd = static_cast<tlm::tlm_command>(rand() % 2);
      if (cmd == tlm::TLM_WRITE_COMMAND) data = address;

      trans.set_command( cmd );
      trans.set_address( address );
      trans.set_data_ptr( reinterpret_cast<unsigned char*>(&data) );
      trans.set_data_length( 4 );
      trans.set_streaming_width( 4 );
      trans.set_byte_enable_ptr( 0 );
      trans.set_dmi_allowed( false );
      trans.set_response_status( tlm::TLM_INCOMPLETE_RESPONSE );

      delay = m_qk.get_local_time();

      socket->b_transport( trans, delay );

      if (trans.is_response_error())
        SC_REPORT_ERROR("TLM-2", trans.get_response_string().c_str());

      cout << name() << " completed " << (cmd ? "write" : "read") << ", addr = " << hex << i
           << ", data = " << hex << data << ", time " << sc_time_stamp()
           << " delay = " << delay << endl;

      // Accumulate local time and synchronize when quantum is reached
      m_qk.set_and_sync( delay );
    }
  }

  int base_address;
  int data; // Internal data buffer used by initiator with generic payload
  tlm_utils::tlm_quantumkeeper m_qk; // Quantum keeper for temporal decoupling
};


// Target module representing a simple memory

struct Memory: sc_module
{
  // TLM-2 socket, 32-bits wide, base protocol, may be bound twice
  tlm_utils::simple_target_socket<Memory> socket;

  enum { SIZE = 256 };
  int mem[SIZE];

  SC_CTOR(Memory)
  : socket("socket")
  {
    socket.register_b_transport       ( this, &Memory::b_transport );
    socket.register_get_direct_mem_ptr( this, &Memory::get_direct_mem_ptr );

    // Initialize memory with random data
    for (int i = 0; i < SIZE; i++)
      mem[i] = rand() % 256;
  }

  // TLM-2 blocking transport method
  virtual void b_transport( tlm::tlm_generic_payload& trans, sc_time& delay )
  {
    tlm::tlm_command cmd = trans.get_command();
    sc_dt::uint64    adr = trans.get_address();
    unsigned char*   ptr = trans.get_data_ptr();
    unsigned int     len = trans.get_data_length();
    unsigned char*   byt = trans.get_byte_enable_ptr();
    unsigned int     wid = trans.get_streaming_width();

    // Obliged to check address range and check for unsupported features,
    //   i.e. byte enables, streaming, and bursts
    // Can ignore DMI hint and extensions
    // Using the SystemC report handler is an acceptable way of signalling an error

    if (adr >= sc_dt::uint64(SIZE) * 4 || adr % 4)
    {
      trans.set_response_status( tlm::TLM_ADDRESS_ERROR_RESPONSE );
      return;
    }
    else if (byt != 0)
    {
      trans.set_response_status( tlm::TLM_BYTE_ENABLE_ERROR_RESPONSE );
      return;
    }
    else if (len > 4 || wid < len)
    {
      trans.set_response_status( tlm::TLM_BURST_ERROR_RESPONSE );
      return;
    }

    // Obliged to implement read and write commands
    if ( cmd == tlm::TLM_READ_COMMAND )
      memcpy(ptr, &mem[adr/4], len);
    else if ( cmd == tlm::TLM_WRITE_COMMAND )
      memcpy(&mem[adr/4], ptr, len);

    // Memory access time
    delay = delay + sc_time(100, SC_NS);

    // Obliged to set response status to indicate successful completion
    trans.set_response_status( tlm::TLM_OK_RESPONSE );
  }

  // TLM-2 forward DMI method
  virtual bool get_direct_mem_ptr(tlm::tlm_generic_payload& trans,
                                  tlm::tlm_dmi& dmi_data)
  {
    sc_dt::uint64 adr = trans.get_address();
    dmi_data.set_dmi_ptr      ( (unsigned char*)(&mem) );
    dmi_data.set_start_address( 0 );
    dmi_data.set_end_address  ( sc_dt::uint64(SIZE) * 4 );
    dmi_data.set_read_latency ( sc_time(100, SC_NS) );
    dmi_data.set_write_latency( sc_time(100, SC_NS) );
    dmi_data.allow_read_write ();

    if (adr >= sc_dt::uint64(SIZE) * 4)
      return false;
    else
      return true;
  }

};


SC_MODULE(Top)
{
  Initiator* init1;
  //Initiator* init2;
  Memory*         memory;

  SC_CTOR(Top)
  {
    init1  = new Initiator("init1");
    init1->set_base_address(000);
    //init2  = new Initiator("init2");
    //init2->set_base_address(128);
    memory = new Memory("memory");

    init1->socket.bind( memory->socket );
    //init2->socket.bind( memory->socket );
  }
};

int sc_main( int argc, char* argv[])
{
    Top top("top");
    sc_start();
    return 0;
}
