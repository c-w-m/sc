#ifndef PROC_H
#define PROC_H

// proc.h
//

#include "master_if.h"
#include "defs.h"

// processor to read data values from the bus
// and write them back to some output locations
class Proc: public sc_module
{
  public:

    sc_in<bool>         clock;
    sc_port<master_if>  system_bus;

    SC_HAS_PROCESS(Proc);

    // Constructor
    Proc(sc_module_name _nm, unsigned _src, unsigned _dest, unsigned _num_items, int _id)
    : sc_module(_nm),  src(_src), dest(_dest), num_items(_num_items), id(_id) {
      SC_THREAD(do_proc);
      sensitive << clock.pos();
      sc_assert (_src < _dest);
    }

    // method declarations
    void do_proc();

  private:
    const unsigned int src, dest, num_items;
    const int id;
};

#endif
