#ifndef MON_H
#define MON_H

#include "systemc"
using namespace sc_core;

SC_MODULE(Mon)
{
  // ports
  sc_in<int>  a, b, c, biggest;
  sc_in<bool> clk;

  void action();

  SC_CTOR(Mon) {
    SC_THREAD(action);
    sensitive << clk.neg();
  }
};

#endif
