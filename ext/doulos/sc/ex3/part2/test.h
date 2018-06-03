#ifndef TEST_H
#define TEST_H

#include "systemc"
using namespace sc_core;
using std::cout;
using std::endl;

SC_MODULE(Test)
{
  sc_in<bool>  clock;
  sc_fifo<int> fifo;      // declare fifo channel

  SC_CTOR(Test)
  : fifo(4) {
    SC_THREAD(producer);
    sensitive << clock.pos();
    SC_THREAD(consumer);
    sensitive << clock.pos();
  }

  void producer() {
    for (int i = 0; i < 20; i++) {
      if (!fifo.nb_write(i))
        cout << "Error writing to fifo" << endl;
      cout << "Produced " << i << endl;

      wait();
    }
  }

  void consumer() {
    for (int i = 0; i < 20; i++) {
      wait();
      wait();

      int data;
      if (!fifo.nb_read(data))
        cout << "Error reading from fifo" << endl;

      cout << "Received    " << data << endl;
    }
    sc_stop();
  }
};

#endif
