/*

This is the starting point for Ex9.

This time we have an initiator that generates 32-bit transactions connected through a width converter
to an 8-bit memory. The initiator used byte enables to enable only byte 0 and byte 2 of each word,
counting 3-2-1-0, where byte 0 is the LSB.

The width converter performs a host-endian width conversion without modifying the transaction.
The width converter only implements b_transport.

The target memory has a one-byte-wide socket, but is able to handle transactions representing
bursts of multiple bytes, and byte enables.

Run the simulation, and notice how the initiator and memory are written to run on a host of
either endianness. However, the width converter is restricted to performing a host-endian width
conversion, i.e. the bytes are sent to the memory in LSB..MSB order for a little-endian host,
or MSB..LSB order for a big-endian host.

Modify the width converter to perform a non-host-endian width conversion. Most likely you are
running on a little-endian host, so this would mean performing a big-endian width conversion.
Include a conditional statement so that the conversion is skipped when running on a host of the
appropriate endianness. You only need to modify the b_transport method of the Width_converter module.

As an aside, the file endian_conv.cpp contains a test program allowing you to experiment with
the endianness conversion functions. There is a block of constants in the middle of the program
that you can modify to setup the inputs to the test.

*/


#include <iomanip>

#define SC_INCLUDE_DYNAMIC_PROCESSES

#include "systemc"
using namespace sc_core;
using namespace sc_dt;
using namespace std;

#include "tlm.h"
#include "tlm_utils/simple_initiator_socket.h"
#include "tlm_utils/simple_target_socket.h"

#include "../common/tlm2_base_protocol_checker.h"
#include "../common/mm.h"


struct Initiator: sc_module
{
  tlm_utils::simple_initiator_socket<Initiator, 32> socket;

  SC_CTOR(Initiator)
  : socket("socket")
  {
    SC_THREAD(thread_process);

    // Initialize byte enable buffer
    byte_enable = 0x00ff00ff;
  }

  void thread_process()
  {
    tlm::tlm_generic_payload* trans;
    sc_time delay = SC_ZERO_TIME;

    for (int i = 0; i < 32; i++)
    {
      int addr = (rand() % 64) * 4;
      tlm::tlm_command cmd = static_cast<tlm::tlm_command>(rand() % 2);
      if (cmd == tlm::TLM_WRITE_COMMAND)
        data = (rand() << 16) | rand();
      else
        data = 0;

      trans = m_mm.allocate();
      trans->acquire();

      trans->set_command( cmd );
      trans->set_address( addr );
      trans->set_data_ptr( reinterpret_cast<unsigned char*>(&data) );
      trans->set_data_length( 4 );
      trans->set_streaming_width( 4 );
      trans->set_byte_enable_ptr( reinterpret_cast<unsigned char*>(&byte_enable) );
      trans->set_byte_enable_length( 4 );
      trans->set_dmi_allowed( false );
      trans->set_response_status( tlm::TLM_INCOMPLETE_RESPONSE ); // Mandatory initial value

      cout << "Initiating " << (cmd ? "write" : " read")
           << ", addr = " << setw(2) << setfill('0') << hex << addr
           << ", data = " << setw(8) << data << " at " << sc_time_stamp() << endl;

      socket->b_transport( *trans, delay );  // Blocking transport call

      // Initiator obliged to check response status and delay
      if ( trans->is_response_error() )
        SC_REPORT_ERROR("TLM-2", "Response error from b_transport");

      trans->release();
    }
  }

  mm  m_mm;  // Memory manager
  int data;  // Internal data buffer used by initiator with generic payload
  int byte_enable;
};


struct Width_converter: sc_module
{
  tlm_utils::simple_target_socket   <Width_converter, 32> targ_socket;
  tlm_utils::simple_initiator_socket<Width_converter,  8> init_socket;

  SC_CTOR(Width_converter)
  : targ_socket("targ_socket")
  , init_socket("init_socket")
  {
    targ_socket.register_b_transport(this, &Width_converter::b_transport);
  }

  virtual void b_transport( tlm::tlm_generic_payload& trans, sc_time& delay )
  {
    tlm::tlm_generic_payload outgoing_trans;

    outgoing_trans.set_data_ptr( trans.get_data_ptr() );
    outgoing_trans.set_byte_enable_ptr( trans.get_byte_enable_ptr() );
    outgoing_trans.deep_copy_from(trans);

    if ( has_host_endianness ( tlm::TLM_LITTLE_ENDIAN ))
	  tlm::tlm_to_hostendian_generic <char>( &outgoing_trans, 4);

    init_socket->b_transport( outgoing_trans, delay );

    if ( has_host_endianness ( tlm::TLM_LITTLE_ENDIAN ))
      tlm::tlm_from_hostendian_generic <char>( &outgoing_trans, 4);

    trans.update_original_from( outgoing_trans );
  }
};


// Target module representing a simple memory

struct Memory: sc_module
{
  tlm_utils::simple_target_socket<Memory, 8> socket;

  const sc_time LATENCY;

  enum { SIZE = 256 }; // 256 bytes
  unsigned char mem[SIZE];

  SC_CTOR(Memory)
  : socket("socket")
  , LATENCY(50, SC_NS)
  {
    socket.register_b_transport       (this, &Memory ::b_transport);
    socket.register_get_direct_mem_ptr(this, &Memory ::get_direct_mem_ptr);
    socket.register_transport_dbg     (this, &Memory ::transport_dbg);

    // Initialize memory to zero
    for (int i = 0; i < SIZE; i++)
      mem[i] = 0;
  }


  virtual void b_transport( tlm::tlm_generic_payload& trans, sc_time& delay )
  {
    tlm::tlm_command cmd = trans.get_command();
    sc_dt::uint64    adr = trans.get_address();
    unsigned char*   ptr = trans.get_data_ptr();
    unsigned int     len = trans.get_data_length();
    unsigned char*   byt = trans.get_byte_enable_ptr();
    unsigned int     bel = trans.get_byte_enable_length();
    unsigned int     wid = trans.get_streaming_width();

    if (adr + len > sc_dt::uint64(SIZE)) {
      trans.set_response_status( tlm::TLM_ADDRESS_ERROR_RESPONSE );
      return;
    }
    if (wid < len) {
      trans.set_response_status( tlm::TLM_BURST_ERROR_RESPONSE );
      return;
    }

    if (cmd == tlm::TLM_WRITE_COMMAND)
    {
      if (byt) {
        for (unsigned int i = 0; i < len; i++)
          if ( byt[i % bel] == TLM_BYTE_ENABLED )
            mem[adr+i] = ptr[i];
      }
      else
        memcpy(&mem[adr], ptr, len);
    }
    else if (cmd == tlm::TLM_READ_COMMAND)
    {
      if (byt) {
        for (unsigned int i = 0; i < len; i++)
          if ( byt[i % bel] == TLM_BYTE_ENABLED )
            ptr[i] = mem[adr+i];
      }
      else
        memcpy(ptr, &mem[adr], len);
    }

    cout << "Executing  " << (cmd ? "write" : " read")
         << ", addr = " << setw(2) << setfill('0') << hex << adr
         << ", data = " << setw(8) << hex << *reinterpret_cast<int*>(cmd ? &mem[adr] : ptr)
         << " at " << sc_time_stamp() << endl;

    delay = delay + LATENCY;

    trans.set_dmi_allowed( true );
    trans.set_response_status( tlm::TLM_OK_RESPONSE );
  }


  virtual bool get_direct_mem_ptr( tlm::tlm_generic_payload& trans,
                                   tlm::tlm_dmi& dmi_data)
  {
    dmi_data.set_dmi_ptr( (unsigned char*)mem );
    dmi_data.set_start_address( 0 );
    dmi_data.set_end_address( SIZE );
    dmi_data.set_read_latency( LATENCY );
    dmi_data.set_write_latency( LATENCY );
    dmi_data.allow_read_write();
    return true;
  }


  virtual unsigned int transport_dbg( tlm::tlm_generic_payload& trans )
  {
    tlm::tlm_command cmd = trans.get_command();
    sc_dt::uint64    adr = trans.get_address();
    unsigned char*   ptr = trans.get_data_ptr();
    unsigned int     len = trans.get_data_length();

    if (adr + len > sc_dt::uint64(SIZE))
      len = (SIZE - int(adr));

    if ( cmd == tlm::TLM_WRITE_COMMAND )
    {
      memcpy(&mem[adr], ptr, len);
    }
    else if ( cmd == tlm::TLM_READ_COMMAND )
    {
      memcpy(ptr, &mem[adr], len);
    }
    return len;
  }

};


SC_MODULE(Top)
{
  Initiator       *initiator;
  Width_converter *converter;
  Memory          *memory;

  tlm_utils::tlm2_base_protocol_checker<32> *check_init;
  tlm_utils::tlm2_base_protocol_checker<8> *check_targ;

  SC_CTOR(Top)
  {
    // Instantiate components
    initiator  = new Initiator("initiator");
    check_init = new tlm_utils::tlm2_base_protocol_checker<32>("check_init");
    converter  = new Width_converter("converter");
    check_targ = new tlm_utils::tlm2_base_protocol_checker<8>("check_targ");
    memory     = new Memory   ("memory");

    // One initiator is bound directly to one target with no intervening bus

    // Bind initiator socket to target socket
    initiator ->socket          .bind( check_init->target_socket );
    check_init->initiator_socket.bind( converter ->targ_socket );
    converter ->init_socket     .bind( check_targ->target_socket );
    check_targ->initiator_socket.bind( memory    ->socket );
  }
};


int sc_main(int argc, char* argv[])
{
  Top top("top");
  sc_start();
  return 0;
}

