#ifndef TEST_H
#define TEST_H

#include "systemc"
using namespace sc_core;
using std::cout;
using std::endl;

SC_MODULE(Test)
{
  sc_fifo<int> fifo;      // declare fifo channel

  SC_CTOR(Test)
  : fifo(4) {
    SC_THREAD(producer);
    SC_THREAD(consumer);
  }

  void producer() {
    for (int i = 0; i < 20; i++) {
      fifo.write(i);      // write to fifo
      cout << "Produced " << i << endl;

      wait(10, SC_NS);    // delay after write
    }
  }

  void consumer() {
    for (;;) {
      wait(20, SC_NS);    // delay before reading

      int data;
      fifo.read(data);    // read data from fifo
      cout << "Received    " << data << endl;
    }
  }
};

#endif
