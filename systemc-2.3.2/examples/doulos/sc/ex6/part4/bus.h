#ifndef BUS_H
#define BUS_H

// bus.h
//
#include "master_if.h"
#include "slave_if.h"
#include "defs.h"

struct reqT
{
  bool request;
  sc_event proceed;
  //default constructor
  reqT():request(false) {}
};

// Hierarchical channel

class Bus : public sc_module, public master_if
{
  public:
    // clock port - bus will operate on negative edge
    sc_in<bool> clock;

    sc_export<master_if> master_export;

    // a port to connect slave(s)
    sc_port<slave_if,0> slave_port;

    SC_HAS_PROCESS(Bus);

    // constructor
    Bus(sc_module_name name)
    : sc_module(name)
    , n_masters(0)
    , request_array(0)
    , request_count(0)
    , mem_status(0)
    {
      master_export(*this);

      SC_THREAD(control_bus);
      sensitive << clock.neg();
    }

    // destructor
    ~Bus() {
      if (request_array) delete [] request_array;
      if (request_count) delete [] request_count;
      if (mem_status)    delete [] mem_status;
    }

    // bus public methods
    void write(BusT::addressT address, BusT::dataT  data, int id);
    void read (BusT::addressT address, BusT::dataT &data, int id);

  private:
    // data fields
    unsigned n_masters;
    reqT* request_array;
    int*  request_count;
    unsigned int *starts, *sizes;
    bool* mem_status;

    // private methods
    void control_bus();
    int  find_interface(BusT::addressT address);
    void end_of_elaboration();
    void register_port(sc_port_base &port_, const char* if_typename_);
    BusT::dataT get_mem_status(int id);
    void set_mem_status(BusT::MEM_STATUS, int id=0);
    int n_pending();

};

#endif
