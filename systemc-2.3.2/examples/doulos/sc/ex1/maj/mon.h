#ifndef MON_H
#define MON_H

#include "systemc.h"

SC_MODULE(Mon)
{
  // ports
  sc_in<bool> a;
  sc_in<bool> b;
  sc_in<bool> c;
  sc_in<bool> f;
  sc_in_clk clk;

  void monitor();

  SC_CTOR(Mon) {
    SC_THREAD(monitor);
    sensitive << clk.neg();
  }
};

#endif
