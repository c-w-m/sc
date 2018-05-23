#ifndef SOURCE_H
#define SOURCE_H

// source.h
//
#include "master_if.h"
#include "defs.h"

class Source: public sc_module
{
  public:

    //sc_in<bool>         clock;
    sc_port<master_if>  system_bus;

    SC_HAS_PROCESS(Source);

    // constructor
    Source( sc_module_name _name, unsigned _src, unsigned _num_items, int _id)
    : sc_module(_name), src(_src), num_items(_num_items), id(_id) {
      SC_THREAD(do_source);
      //sensitive << clock.pos();
    }

    // method declarations
    void do_source();

  private:
    const unsigned src, num_items;
    const int id;
};

#endif
