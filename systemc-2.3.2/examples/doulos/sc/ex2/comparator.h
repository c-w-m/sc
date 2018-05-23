#ifndef COMPARATOR_H
#define COMPARATOR_H

#include "systemc"
using namespace sc_core;

SC_MODULE(Comparator)
{
  // ports
  sc_in<int>   in1, in2;
  sc_out<bool> out1;

  // process definitions
  void action();

  SC_CTOR(Comparator) {
    SC_METHOD(action);
    sensitive << in1 << in2;
  }
};

#endif
