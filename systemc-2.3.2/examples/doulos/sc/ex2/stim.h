#ifndef STIM_H
#define STIM_H

#include "systemc"
using namespace sc_core;

SC_MODULE(Stim)
{
  // ports
  sc_out<int> a, b, c;
  sc_in<bool> clk;

  void action();

  SC_CTOR(Stim) {
    SC_THREAD(action);
    sensitive << clk.pos();
  }
};

#endif
