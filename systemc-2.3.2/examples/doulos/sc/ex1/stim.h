#ifndef STIM_H
#define STIM_H

#include "systemc.h"

SC_MODULE(Stim)
{
  // ports
  sc_out<bool> a;
  sc_out<bool> b;
  sc_out<bool> c;

  sc_in<bool> clk;

  void action();

  SC_CTOR(Stim) {
    SC_THREAD(action);
    sensitive << clk.pos();
  }
};

#endif
