#ifndef TEST_H
#define TEST_H

#include "systemc"
using namespace sc_core;

SC_MODULE(Test)
{
  sc_in<bool>  clock;
  sc_out<bool> stopped;
  sc_fifo<int> fifo;      // declare fifo channel

  int i;
  int depth;
  bool overflow;

  Test(sc_module_name _name, int _depth)
  : fifo(_depth), i(0), depth(_depth), overflow(false) {
    SC_METHOD(producer);
    sensitive << clock.pos();
    SC_METHOD(consumer);
    sensitive << clock.pos();
    stopped.initialize(false);
  }

  void producer() {
    if (rand() < RAND_MAX/10) {
      if (!fifo.nb_write(i))
        overflow = true;
      else
        ++ i;
    }
  }

  void consumer() {
    if (rand() < RAND_MAX/10) {
      int data;
      if (fifo.nb_read(data))
      if (data > 19) {
        stopped = true;
      }
    }
  }

  SC_HAS_PROCESS(Test);
};

#endif
