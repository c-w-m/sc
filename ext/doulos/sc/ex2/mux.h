#ifndef MUX_H
#define MUX_H

#include "systemc"
using namespace sc_core;

SC_MODULE(Mux)
{
  // ports
  sc_in<int>  in0, in1, in2, sel;
  sc_out<int> biggest;

  // process definitions
  void action();

  SC_CTOR(Mux) {
    SC_METHOD(action);
    sensitive << in0 << in1 << in2 << sel;
  }
};

#endif
