#ifndef TOP_H
#define TOP_H

#include "systemc"
using namespace sc_core;

#include "stim.h"
#include "sorter.h"
#include "mon.h"

SC_MODULE(Top)
{
  // signals to wire up the device under test
  sc_signal<int> asig, bsig, csig, fsig;

  // declare a clk for the stimulus process
  sc_clock testclk;

  Stim   *stim1;
  Sorter *dut;
  Mon    *mon1;

  SC_CTOR(Top)
  : testclk( "testclk", 10, SC_NS )
  {
    stim1 = new Stim("stim1");
    dut   = new Sorter( "dut");
    mon1  = new Mon("mon1");

    // stimulus instance
    stim1->a(asig);
    stim1->b(bsig);
    stim1->c(csig);
    stim1->clk(testclk);

    // component instances
    dut->a(asig);
    dut->b(bsig);
    dut->c(csig);
    dut->biggest(fsig);

    // monitor instance
    mon1->a(asig);
    mon1->b(bsig);
    mon1->c(csig);
    mon1->biggest(fsig);
    mon1->clk(testclk);
  }
};

#endif

