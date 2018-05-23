#ifndef MEM_H
#define MEM_H

// mem.h
//
#include "slave_if.h"

class Mem : public sc_module, public slave_if
{
  public:
    sc_export<slave_if> slave_export;

    Mem(sc_module_name name, unsigned int start, unsigned int size, sc_trace_file *trace_file)
    : sc_module(name),
      start(start),
      size(size),
      trace_file(trace_file)
    {
      if (size < 1) {
        cout << "Mem size must be at least 1" << endl;
        sc_assert(false);
      }
      slave_export(*this);
      init();
    }

    // interface methods
    void slave_write(BusT::addressT address, BusT::dataT  data);
    void slave_read (BusT::addressT address, BusT::dataT &data);
    void get_map(unsigned int &start, unsigned int &size);

    // support methods
    void status();
    void dump(unsigned int start_addr = 0 , unsigned int end_addr = ~0);
    void add_trace(unsigned int address);
    void init();

  private:
    // data items
    unsigned int start;
    unsigned int size;
    sc_trace_file *trace_file;
    BusT::dataT *buf;
};

#endif
