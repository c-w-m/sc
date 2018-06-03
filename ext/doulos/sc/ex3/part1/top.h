#ifndef TOP_H
#define TOP_H

#include "systemc"
using namespace sc_core;

#include "test.h"

SC_MODULE(Top)
{

  Test test;

  SC_CTOR(Top)
  : test("test")
  {
  }
};

#endif
