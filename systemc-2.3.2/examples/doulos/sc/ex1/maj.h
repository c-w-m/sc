#ifndef MAJ_H
#define MAJ_H

#include "systemc"
using namespace sc_core;

SC_MODULE(Maj)
{
  // ports
  sc_in<bool>  a;
  sc_in<bool>  b;
  sc_in<bool>  c;
  sc_out<bool> f;

  void action();

  SC_CTOR(Maj) {
    SC_METHOD(action);
    sensitive << a << b << c;
  }
};

#endif
