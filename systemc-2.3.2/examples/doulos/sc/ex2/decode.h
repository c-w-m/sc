#ifndef DECODE_H
#define DECODE_H

#include "systemc"
using namespace sc_core;

SC_MODULE(Decode)
{
  // ports
  sc_in<bool> in0, in1, in2;
  sc_out<int> out1;

  void action();

  SC_CTOR(Decode) {
    SC_METHOD(action);
    sensitive << in0 << in1 << in2;
  }
};

#endif
