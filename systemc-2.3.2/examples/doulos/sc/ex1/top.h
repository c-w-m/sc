#ifndef TOP_H
#define TOP_H

#include "systemc"
using namespace sc_core;

#include "stim.h"
#include "maj.h"
#include "mon.h"

SC_MODULE(Top)
{
  // signals to wire up the device under test
  sc_signal<bool> asig, bsig, csig, fsig;

  // declare a clk for the stimulus process
  sc_clock testclk;

  Stim *stim;
  Maj  *maj;
  Mon  *mon;

  SC_CTOR(Top)
  : testclk("testclk", 10, SC_NS)
  {
    // Instantiate the modules
    stim = new Stim("stim");
    maj  = new Maj("maj");
    mon  = new Mon("mon");
    
    // Bind the ports
    stim->a(asig);
    stim->b(bsig);
    stim->c(csig);
    stim->clk(testclk);

    maj->a(asig);
    maj->b(bsig);
    maj->c(csig);
    maj->f(fsig);

    mon->a(asig);
    mon->b(bsig);
    mon->c(csig);
    mon->f(fsig);
    mon->clk(testclk);
  }
};

#endif
