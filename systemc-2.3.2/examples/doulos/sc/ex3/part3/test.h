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

  int i;
  bool odd;

  SC_CTOR(Test)
  : fifo(4), i(0), odd(false) {
    SC_METHOD(producer);
    sensitive << clock.pos();
    SC_METHOD(consumer);
    sensitive << clock.pos();
  }

  void producer() {
    if (!fifo.nb_write(i))
      cout << "Error writing to fifo" << endl;
    cout << "Produced " << i << endl;
    ++ i;
  }

  void consumer() {
    if (odd) {
      int data;
      if (!fifo.nb_read(data))
        cout << "Error reading from fifo" << endl;
      cout << "Received    " << data << endl;

      if (data > 19) sc_stop();
    }
    odd = !odd;
  }
};

#endif
