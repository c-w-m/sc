
// This is the answer to Ex11


#include <vector>
#include <map>
#include <fstream>
#include <iomanip>

#define SC_INCLUDE_DYNAMIC_PROCESSES

#include "systemc"
using namespace sc_core;
using namespace sc_dt;
using namespace std;

#include "tlm.h"
#include "tlm_utils/simple_initiator_socket.h"
#include "tlm_utils/simple_target_socket.h"
#include "tlm_utils/multi_passthrough_initiator_socket.h"
#include "tlm_utils/multi_passthrough_target_socket.h"
#include "tlm_utils/tlm_quantumkeeper.h"


static ofstream fout("ex11.log");


struct snoop_extension: tlm::tlm_extension<snoop_extension>
{
  snoop_extension() {}

  virtual tlm_extension_base* clone() const
  {
    snoop_extension* ext = new snoop_extension;
    ext->end_address   = this->end_address;
    return ext;
  }

  virtual void copy_from(tlm_extension_base const &ext)
  {
    end_address   = static_cast<snoop_extension const &>(ext).end_address;
  }

  sc_dt::uint64 end_address;
};


struct snoop_protocol_types
{
  typedef tlm::tlm_generic_payload tlm_payload_type;
  typedef tlm::tlm_phase           tlm_phase_type;
};



struct Snooping_initiator: sc_module
{
  tlm_utils::simple_initiator_socket<Snooping_initiator, 32, snoop_protocol_types> socket;

  SC_CTOR(Snooping_initiator)
  : socket("socket")
  , start_address(0x100)
  , end_address(0x17F)
  , latency(50, SC_NS)
  , count(0)
  , m_dmi_valid(false)
  {
    socket.register_invalidate_direct_mem_ptr(this, &Snooping_initiator::invalidate_direct_mem_ptr);

    SC_THREAD(thread_process);

    m_qk.set_global_quantum( sc_time(1, SC_US) );
    m_qk.reset();
  }

  void thread_process()
  {
    while (true)
    {
      tlm::tlm_generic_payload trans;
      sc_time delay = SC_ZERO_TIME;

      trans.set_command( tlm::TLM_READ_COMMAND );
      trans.set_address( start_address );

      snoop_extension* ext = new snoop_extension;
      ext->end_address = end_address;

      trans.set_extension( ext );

      // Request DMI region with write snoop

      tlm::tlm_dmi dmi_data;
      m_dmi_valid = socket->get_direct_mem_ptr( trans, dmi_data );

      if (!m_dmi_valid)
        SC_REPORT_FATAL("TLM-2", "Snoop protocol target is obliged to support DMI");

      // Copy DMI region into cache
      memcpy(m_cache, dmi_data.get_dmi_ptr(), end_address - start_address + 1);

      translate_cache();

      while (true)
      {
        // Test cache contents are still valid before executing each instruction
        if (m_dmi_valid)
        {
          execute_instruction_from_cache();
          m_qk.inc( latency );
          if (m_qk.need_sync())
            m_qk.sync();
        }
        else
          break;
      }
    }
  }

  virtual void invalidate_direct_mem_ptr( sc_dt::uint64 start_range,
                                          sc_dt::uint64 end_range )
  {
    if (start_range <= end_address && end_range >= start_address)
    {
      m_dmi_valid = false;
      fout << "Cache invalidated at " << sc_time_stamp() + m_qk.get_local_time() << endl;
    }
  }

  void translate_cache() { /* Dummy */ }

  void execute_instruction_from_cache()
  {
    /* Dummy */

    fout << "Executing instruction from cache at " << sc_time_stamp() + m_qk.get_local_time()
         << endl;

    ++count;
    if (count == 100)
      wait();
  }

  const sc_dt::uint64 start_address;
  const sc_dt::uint64 end_address;
  const sc_time latency;

  unsigned int count;
  bool m_dmi_valid;
  unsigned char m_cache[256];
  tlm_utils::tlm_quantumkeeper m_qk;
};


struct Initiator: sc_module
{
  tlm_utils::simple_initiator_socket<Initiator, 32, snoop_protocol_types> socket;

  SC_CTOR(Initiator)
  : socket("socket")
  {
    socket.register_invalidate_direct_mem_ptr(this, &Initiator::invalidate_direct_mem_ptr);

    SC_THREAD(thread_process);

    m_qk.set_global_quantum( sc_time(1, SC_US) );
    m_qk.reset();
  }

  void thread_process()
  {
    tlm::tlm_generic_payload trans;
    sc_time delay = SC_ZERO_TIME;

    // Generate a random sequence of reads and writes
    for (int i = 0; i < 64; i++)
    {
      sc_dt::uint64 addr = (rand() % 128) << 2;
      tlm::tlm_command cmd = static_cast<tlm::tlm_command>(rand() % 2);
      if (cmd == tlm::TLM_WRITE_COMMAND) data = int(addr);

      // Check DMI table
      bool dmi = false;
      unsigned char* dmi_pointer;
      sc_dt::uint64  dmi_start_address;
      sc_dt::uint64  dmi_end_address;
      sc_time        dmi_latency;
      for (unsigned int i = 0; i < dmi_table.size(); i++)
      {
        dmi_pointer       = dmi_table[i].get_dmi_ptr();
        dmi_start_address = dmi_table[i].get_start_address();
        dmi_end_address   = dmi_table[i].get_end_address();
        if (addr >= dmi_start_address && addr <= dmi_end_address)
          if (cmd == tlm::TLM_WRITE_COMMAND && dmi_table[i].is_write_allowed())
          {
            dmi = true;
            dmi_latency = dmi_table[i].get_write_latency();
            break;
          }
          else if (cmd == tlm::TLM_READ_COMMAND && dmi_table[i].is_read_allowed())
          {
            dmi = true;
            dmi_latency = dmi_table[i].get_read_latency();
            break;
          }
      }

      if (dmi)
      {
        if (cmd == tlm::TLM_WRITE_COMMAND)
          memcpy(dmi_pointer + addr - dmi_start_address, &data, 4);
        else
          memcpy(&data, dmi_pointer + addr - dmi_start_address, 4);

        m_qk.inc( dmi_latency );

        fout << name() << " completed DMI " << (cmd ? "write" : "read") << ", addr = " << hex << addr
             << ", data = " << hex << data << ", time " << sc_time_stamp() << endl;

      }
      else
      {
        // Regular transaction

        trans.set_command( cmd );
        trans.set_address( addr );
        trans.set_data_ptr( reinterpret_cast<unsigned char*>(&data) );
        trans.set_data_length( 4 );
        trans.set_streaming_width( 4 );
        trans.set_byte_enable_ptr( 0 );
        trans.set_dmi_allowed( false );
        trans.set_response_status( tlm::TLM_INCOMPLETE_RESPONSE );

        delay = m_qk.get_local_time();

        socket->b_transport( trans, delay );

        m_qk.set( delay );

        if ( trans.is_response_error() )
          SC_REPORT_ERROR("TLM-2", "Response error from b_transport");

        fout << name() << " completed regular " << (cmd ? "write" : "read") << ", addr = " << hex << addr
             << ", data = " << hex << data << ", time " << sc_time_stamp()
             << " delay = " << delay << endl;

        if (trans.is_dmi_allowed())
        {
          // Reuse transaction object to request DMI
          trans.set_address( addr );
          tlm::tlm_dmi dmi_data;
          if (socket->get_direct_mem_ptr( trans, dmi_data ))
            dmi_table.push_back(dmi_data);
        }
      }

      if (m_qk.need_sync())
        m_qk.sync();
    }
  }

  virtual void invalidate_direct_mem_ptr( sc_dt::uint64 start_range,
                                          sc_dt::uint64 end_range )
  {
    for (unsigned int i = 0; i < dmi_table.size(); i++)
    {
      sc_dt::uint64  dmi_start_address = dmi_table[i].get_start_address();
      sc_dt::uint64  dmi_end_address   = dmi_table[i].get_end_address();
      if (start_range <= dmi_end_address && end_range >= dmi_start_address)
        // Invalidate entire region
        dmi_table.erase(dmi_table.begin() + i);
    }
  }


  int data;                            // Internal data buffer used with generic payload
  tlm_utils::tlm_quantumkeeper m_qk;   // Quantum keeper for temporal decoupling
  std::vector<tlm::tlm_dmi> dmi_table; // Table of valid DMI regions
};


struct Interconnect: sc_module
{
  tlm_utils::multi_passthrough_target_socket<Interconnect, 32, snoop_protocol_types>    targ_socket;
  tlm_utils::multi_passthrough_initiator_socket<Interconnect, 32, snoop_protocol_types> init_socket;

  // ***********************************************************
  tlm::tlm_analysis_port<tlm::tlm_generic_payload> init_side_ap;
  tlm::tlm_analysis_port<tlm::tlm_generic_payload> targ_side_ap;
  // ***********************************************************

  SC_CTOR(Interconnect)
  : targ_socket("targ_socket")
  , init_socket("init_socket")
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
    if (init_socket.size() != 2)
      SC_REPORT_ERROR("TLM-2", "Interconnect must be bound to exactly two targets");
  }

  // Forward interface

  virtual void b_transport( int id, tlm::tlm_generic_payload& trans, sc_time& delay )
  {
    sc_dt::uint64 masked_address;
    unsigned int target = decode_address( trans.get_address(), masked_address );
    trans.set_address( masked_address );

    // ***********************************************************
    targ_side_ap.write( trans );
    // ***********************************************************

    init_socket[target]->b_transport( trans, delay );
  }


  virtual tlm::tlm_sync_enum nb_transport_fw( int id, tlm::tlm_generic_payload& trans,
                                              tlm::tlm_phase& phase, sc_time& delay )
  {
    m_id_map[ &trans ] = id;

    sc_dt::uint64 masked_address;
    unsigned int target = decode_address( trans.get_address(), masked_address );
    trans.set_address( masked_address );

    // ***********************************************************
    targ_side_ap.write( trans );
    // ***********************************************************

    return init_socket[target]->nb_transport_fw( trans, phase, delay );
  }

  virtual bool get_direct_mem_ptr( int id, tlm::tlm_generic_payload& trans,
                                           tlm::tlm_dmi& dmi_data)
  {
    sc_dt::uint64 masked_address;
    unsigned int target = decode_address( trans.get_address(), masked_address );
    trans.set_address( masked_address );

    snoop_extension* ext = trans.get_extension<snoop_extension>();
    if (ext)
    {
      decode_address( ext->end_address, masked_address );
      ext->end_address = masked_address;
    }

    bool status = init_socket[target]->get_direct_mem_ptr( trans, dmi_data );

    dmi_data.set_start_address( reconstruct_address(dmi_data.get_start_address(), target) );
    dmi_data.set_end_address(   reconstruct_address(dmi_data.get_end_address(), target) );

    return status;
  }

  virtual unsigned int transport_dbg( int id, tlm::tlm_generic_payload& trans )
  {
    sc_dt::uint64 masked_address;
    unsigned int target = decode_address( trans.get_address(), masked_address );
    trans.set_address( masked_address );

    return init_socket[target]->transport_dbg( trans );
  }


  // Backward interface

  virtual tlm::tlm_sync_enum nb_transport_bw( int id, tlm::tlm_generic_payload& trans,
                                              tlm::tlm_phase& phase, sc_time& delay )
  {
    // ***********************************************************
    init_side_ap.write( trans );
    // ***********************************************************

    return targ_socket[ m_id_map[ &trans ] ]->nb_transport_bw( trans, phase, delay );
  }

  virtual void invalidate_direct_mem_ptr( int id, sc_dt::uint64 start_range,
                                                  sc_dt::uint64 end_range )
  {
    // Reconstruct address range in system memory map
    sc_dt::uint64 bw_start_range = reconstruct_address(start_range, id);
    sc_dt::uint64 bw_end_range   = reconstruct_address(end_range, id);

    // Propagate call backward to all initiators
    for (unsigned int i = 0; i < targ_socket.size(); i++)
      targ_socket[i]->invalidate_direct_mem_ptr(bw_start_range, bw_end_range);
  }

  unsigned int decode_address( sc_dt::uint64 address, sc_dt::uint64& masked_address )
  {
    // Use the 9th bit of the address to indicate target
    masked_address = address & 0xff;
    return (address >> 8) & 1;
  }

  sc_dt::uint64 reconstruct_address ( uint64 address, unsigned int target )
  {
    return address | (target << 8);
  }

  std::map <tlm::tlm_generic_payload*, unsigned int> m_id_map;
};


// ***********************************************************
struct Analysis: sc_module, tlm::tlm_analysis_if<tlm::tlm_generic_payload>
{
  SC_CTOR(Analysis)
  {
  }

  virtual void write( const tlm::tlm_generic_payload& t )
  {
    // This local copy is only necessary because of the following bug in TLM-2.0.
    // The has_mm() and get_ref_count() methods should be const, but they are not!

    tlm::tlm_generic_payload trans;
    trans.deep_copy_from(t);

    std::ostringstream txt;

    txt << "Instance: " << this->name();
    txt << "\n\nTransaction details:";
    txt << "\n  has_mm             = " << dec << trans.has_mm() << " (bool)";
    txt << "\n  ref_count          = " << dec << trans.get_ref_count() << " (int)";
    txt << "\n\n  command            = " <<
       (trans.get_command() == tlm::TLM_READ_COMMAND  ? "TLM_READ_COMMAND"
       :trans.get_command() == tlm::TLM_WRITE_COMMAND ? "TLM_WRITE_COMMAND"
                                                      : "TLM_IGNORE_COMMAND");
    txt << "\n  address            = " << hex << trans.get_address() << " (hex)";
    txt << "\n  data_ptr           = " << hex
        << reinterpret_cast<int*>(trans.get_data_ptr()) << " (hex)";
    txt << "\n  data_length        = " << hex << trans.get_data_length() << " (hex)";
    txt << "\n  streaming_width    = " << hex << trans.get_streaming_width() << " (hex)";
    txt << "\n  byte_enable_ptr    = " << hex
        << reinterpret_cast<int*>(trans.get_byte_enable_ptr()) << " (hex)";
    txt << "\n  byte_enable_length = " << hex << trans.get_byte_enable_length() << " (hex)";
    txt << "\n  dmi_allowed        = " << dec << trans.is_dmi_allowed() << " (bool)";
    txt << "\n  response_status    = " << trans.get_response_string();

    bool extensions_present = false;
    for (unsigned int i = 0; i < tlm::max_num_extensions(); i++)
    {
      tlm::tlm_extension_base* ext = trans.get_extension(i);
      if (ext)
      {
        if (!extensions_present)
          txt << "\n\n  extensions:";
        txt << "\n    index = " << i << "   type = " << typeid(*ext).name();
        extensions_present = true;
      }
    }

    txt << "\n\n";

    fout << txt.str().c_str();
  }
};
// ***********************************************************


// Target module representing a simple memory

struct Memory: sc_module
{
  tlm_utils::simple_target_socket<Memory, 32, snoop_protocol_types> socket;

  const sc_time LATENCY;

  enum { SIZE = 64 }; // 256 bytes
  int mem[SIZE];

  SC_CTOR(Memory)
  : socket("socket")
  , LATENCY(50, SC_NS)
  , write_snoop(false)
  {
    socket.register_b_transport       (this, &Memory ::b_transport);
    socket.register_get_direct_mem_ptr(this, &Memory ::get_direct_mem_ptr);
    socket.register_transport_dbg     (this, &Memory ::transport_dbg);

    // Initialize memory with random data
    for (int i = 0; i < SIZE; i++)
      mem[i] = rand() % 256;
  }


  virtual void b_transport( tlm::tlm_generic_payload& trans, sc_time& delay )
  {
    tlm::tlm_command cmd = trans.get_command();
    sc_dt::uint64    adr = trans.get_address();
    unsigned char*   ptr = trans.get_data_ptr();
    unsigned int     len = trans.get_data_length();
    unsigned char*   byt = trans.get_byte_enable_ptr();
    unsigned int     wid = trans.get_streaming_width();

    if (adr/4 >= sc_dt::uint64(SIZE) || (adr % 4)) {
      trans.set_response_status( tlm::TLM_ADDRESS_ERROR_RESPONSE );
      return;
    }
    if (byt) {
      trans.set_response_status( tlm::TLM_BYTE_ENABLE_ERROR_RESPONSE );
      return;
    }
    if (len != 4 || wid != 4) {
      trans.set_response_status( tlm::TLM_BURST_ERROR_RESPONSE );
      return;
    }

    if ( cmd == tlm::TLM_READ_COMMAND )
    {
      fout << "Execute read from " << name() << ", addr = " << hex << adr << endl;
      memcpy(ptr, &mem[adr/4], len);
    }
    else if ( cmd == tlm::TLM_WRITE_COMMAND )
    {
      fout << "Execute write to " << name() << ", addr = " << hex << adr << ", data = "
           << int(mem[adr/4]) << endl;
      memcpy(&mem[adr/4], ptr, len);

      if (write_snoop)
        if (adr + len > snoop_start_address && adr <= snoop_end_address)
        {
          // Caught a write to a snooped region
          socket->invalidate_direct_mem_ptr(snoop_start_address, snoop_end_address);
          write_snoop = false;
        }
    }

    delay = delay + LATENCY;

    trans.set_dmi_allowed( true );
    trans.set_response_status( tlm::TLM_OK_RESPONSE );
  }


  virtual bool get_direct_mem_ptr( tlm::tlm_generic_payload& trans,
                                   tlm::tlm_dmi& dmi_data)
  {
    tlm::tlm_command cmd = trans.get_command();
    snoop_extension* ext = trans.get_extension<snoop_extension>();
    if (ext)
      if (cmd == tlm::TLM_READ_COMMAND)
      {
        // Write snoop requested
        snoop_start_address = trans.get_address();
        snoop_end_address   = ext->end_address;

        dmi_data.set_dmi_ptr( reinterpret_cast<unsigned char*>(&mem[snoop_start_address/4]) );
        dmi_data.set_start_address( snoop_start_address );
        dmi_data.set_end_address( snoop_end_address);
        dmi_data.set_read_latency( LATENCY );
        dmi_data.set_write_latency( LATENCY );
        dmi_data.allow_read();

        // Address must be word-aligned
        if (snoop_start_address % 4)
          return false;

        write_snoop = true;
        fout << "Setup write snoop on " << name() << " " << snoop_start_address << " to "
             << snoop_end_address << endl;

         // Invalidate the given DMI region for all initiators
        socket->invalidate_direct_mem_ptr(snoop_start_address, snoop_end_address);
      }
      else
        SC_REPORT_ERROR("TLM-2", "Attempt to request a write snoop with a DMI write region");
    else
    {
      // Regular DMI requested
      dmi_data.set_dmi_ptr( (unsigned char*)mem );
      dmi_data.set_start_address( 0 );
      dmi_data.set_end_address( SIZE * 4 - 1);
      dmi_data.set_read_latency( LATENCY );
      dmi_data.set_write_latency( LATENCY );

      // Only readonly DMI is allowed when there is a write snoop in place
      if (write_snoop && cmd == tlm::TLM_WRITE_COMMAND)
        return false;

      if (cmd == tlm::TLM_WRITE_COMMAND)
        dmi_data.allow_read_write();
      else
        dmi_data.allow_read();
    }
    return true;
  }


  virtual unsigned int transport_dbg( tlm::tlm_generic_payload& trans )
  {
    tlm::tlm_command cmd = trans.get_command();
    sc_dt::uint64    adr = trans.get_address();
    unsigned char*   ptr = trans.get_data_ptr();
    unsigned int     len = trans.get_data_length();

    if (adr % 4 || len % 4)
      return 0;

    if (adr >= sc_dt::uint64(SIZE) * 4)
      return 0;

    if (adr + len > sc_dt::uint64(SIZE * 4))
      len = SIZE * 4 - int(adr);

    if ( cmd == tlm::TLM_READ_COMMAND )
    {
      memcpy(ptr, &mem[adr/4], len);
    }
    else if ( cmd == tlm::TLM_WRITE_COMMAND )
    {
      memcpy(&mem[adr/4], ptr, len);
    }
    return len;
  }

  bool write_snoop;
  sc_dt::uint64 snoop_start_address;
  sc_dt::uint64 snoop_end_address;
};


SC_MODULE(Top)
{
  Snooping_initiator *initiator1;
  Initiator          *initiator2;
  Interconnect       *interconnect;
  Memory             *memory1;
  Memory             *memory2;

  Analysis           *analysis;

  SC_CTOR(Top)
  {
    initiator1 = new Snooping_initiator("initiator1");
    initiator2 = new Initiator("initiator2");

    interconnect = new Interconnect("interconnect");

    memory1    = new Memory   ("memory1");
    memory2    = new Memory   ("memory2");

    initiator1->socket.bind(interconnect->targ_socket);
    initiator2->socket.bind(interconnect->targ_socket);
    interconnect->init_socket.bind(memory1->socket);
    interconnect->init_socket.bind(memory2->socket);

    // ***********************************************************
    analysis   = new Analysis ("analysis");
    interconnect->init_side_ap.bind( *analysis );
    interconnect->targ_side_ap.bind( *analysis );
    // ***********************************************************
  }
};


int sc_main(int argc, char* argv[])
{
  Top top("top");
  sc_start();
  return 0;
}
