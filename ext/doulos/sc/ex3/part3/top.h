#ifndef TOP_H
#define TOP_H

#include "systemc"
using namespace sc_core;

#include "test.h"

SC_MODULE(Top)
{
  Test test;
  sc_clock clock;

  SC_CTOR(Top)
  : test("test"),
    clock("clock", 10, SC_NS)
  {
    test.clock(clock);
  }
};

#endif
