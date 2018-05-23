#ifndef RISC_H
#define RISC_H

// SystemC 2.0
// risc.h
//
#include "systemc"
using namespace sc_core;

#include "master_if.h"
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Risc: public sc_module
{
public:

  // port declarations
  //sc_in<bool>        clock;
  sc_out<bool>       halt;
  sc_port<master_if> system_bus;

  SC_HAS_PROCESS(Risc);

  // constructor
  Risc(sc_module_name _name, char *asm_file, sc_trace_file *trace_file, int _id)
  : sc_module(_name),
    af(asm_file),
    tf(trace_file),
    id(_id)
  {
    SC_THREAD(entry);
      //sensitive << clock.pos();
  }

  // method declarations
  void entry();

  // class attributes
  char* const af;
  sc_trace_file* const tf;
  const int id;
};

#endif
