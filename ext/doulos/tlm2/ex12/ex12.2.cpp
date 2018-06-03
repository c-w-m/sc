
// This the solution to Ex12 Part 2

// Initiator and target connected directly using a transport interface

#include "systemc"
using namespace sc_core;
using namespace std;

#include "tlm.h"

// Enumerations borrowed from TLM-2

enum tlm_command {
    TLM_READ_COMMAND,
    TLM_WRITE_COMMAND,
    TLM_IGNORE_COMMAND
};

enum tlm_response_status {
    TLM_OK_RESPONSE = 1,
    TLM_INCOMPLETE_RESPONSE = 0,
    TLM_GENERIC_ERROR_RESPONSE = -1,
    TLM_ADDRESS_ERROR_RESPONSE = -2,
    TLM_COMMAND_ERROR_RESPONSE = -3,
    TLM_BURST_ERROR_RESPONSE = -4,
    TLM_BYTE_ENABLE_ERROR_RESPONSE = -5
};

// Request and respose transaction structures

struct req_t
{
  sc_dt::uint64        m_address;
  tlm_command          m_command;
  int                  m_data;
};

struct rsp_t
{
  int                  m_data;
  tlm_response_status  m_response_status;
};


struct Initiator: sc_module
{
  sc_port<tlm::tlm_transport_if<req_t, rsp_t> > transport_port;

  SC_CTOR(Initiator)
  {
    SC_THREAD(thread_process);
  }

  void thread_process()
  {
    // Generate a series of requests
    for (int i = 0; i < 8; i++)
    {
      req_t req;
      req.m_command = rand() % 2 ? TLM_WRITE_COMMAND : TLM_READ_COMMAND;
      req.m_address = i;
      req.m_data    = i;

      if (req.m_command)
        cout << "New write, address = " << i << endl;
      else
        cout << "New read, address = " << i << endl;

      rsp_t rsp = transport_port->transport(req);

      if (rsp.m_response_status == TLM_OK_RESPONSE)
        cout << "OK response, data = " << rsp.m_data << endl;
      else
        cout << "ERROR response" << endl;
    }
  }
};


struct Target: sc_module, tlm::tlm_transport_if<req_t, rsp_t>
{
  sc_export<tlm::tlm_transport_if<req_t, rsp_t> > transport_export;

  SC_CTOR(Target) : m_data(256)
  {
    transport_export.bind( *this );
  }

  virtual rsp_t transport( const req_t& req )
  {
    rsp_t rsp;

    if (req.m_command == TLM_WRITE_COMMAND)
      cout << "Executing write, address = " << req.m_address << endl;
    else if (req.m_command == TLM_READ_COMMAND)
    {
      cout << "Executing read, address = " << req.m_address << endl;
      rsp.m_data = --m_data;
    }
    wait(10, SC_NS);

    rsp.m_response_status = TLM_OK_RESPONSE;
    return rsp;
  }

  int m_data;
};


SC_MODULE(Top)
{
  Initiator*  initiator;
  Target*     target;

  SC_CTOR(Top)
  {
    initiator = new Initiator("initiator");
    target    = new Target("target");

    initiator->transport_port( target->transport_export );
  }
};


int sc_main( int argc, char* argv[])
{
    Top top("top");
    sc_start();
    return 0;
}
