#ifndef TOP_H
#define TOP_H

#include "systemc"
using namespace sc_core;
using std::cout;
using std::endl;

#include "test.h"

SC_MODULE(Top)
{
  enum { numfifo = 20 };

  Test* test[numfifo];

  sc_clock clock;
  sc_buffer<bool> stopped[numfifo];

  SC_CTOR(Top)
  : clock("clock", 10, SC_NS)
  {
    for (int i = 0; i < numfifo; i++) {
      char buf[10];
      sprintf(buf, "test%u", i);
      test[i] = new Test(buf, i+1);
      test[i]->clock(clock);
      test[i]->stopped(stopped[i]);
    }

    stopped_count = 0;

    SC_METHOD(check_all_stopped);
    for (int i =0; i<numfifo; i++)
      sensitive << stopped[i];
  }

  void check_all_stopped()
  {
    stopped_count = 0;
    for (int i =0; i < numfifo; i++) {
      if (stopped[i]) stopped_count++;
    }
    if (stopped_count == numfifo-1) sc_stop();
  }

  ~Top()
  {
    for (int i = 0; i < numfifo; i++)
      cout << "Fifo depth " << i+1 << (test[i]->overflow ? " overflowed" : " okay") << endl;

    for (int i = 0; i < numfifo; i++)
      delete test[i];
  }

  int stopped_count;
};

#endif


