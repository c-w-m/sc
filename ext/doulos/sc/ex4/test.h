#ifndef TEST_H
#define TEST_H

#include "systemc"
using namespace sc_core;
using std::cout;
using std::endl;

#include <sstream>
using std::ostringstream;
using std::ends;

SC_MODULE(Test)
{
  sc_in<bool>  clock;

  sc_fifo<sc_dt::sc_int<8> > fifo;

  sc_dt::sc_int<8>  count;
  sc_dt::sc_int<8>  data;

  bool odd;

  SC_CTOR(Test)
  : fifo(4), count(0), odd(false)
  {
    SC_METHOD(producer);
      sensitive << clock.pos();
    SC_METHOD(consumer);
      sensitive << clock.pos();
  }
  
  void producer()
  {
    if (!fifo.nb_write(count))
      SC_REPORT_ERROR("producer", "Error writing to fifo");
    ostringstream oss;
    oss << "Produced " << count << ends;
    SC_REPORT_INFO("producer", oss.str().c_str());
    ++ count;
  }

  void consumer()
  {
    if (odd)
    {
      if (!fifo.nb_read(data))
        SC_REPORT_ERROR("consumer", "Error reading from fifo");
      ostringstream oss;
      oss << "Received    " << data << ends;
      SC_REPORT_INFO("consumer", oss.str().c_str());
      if (data > 19) sc_stop();
    }
    odd = !odd;
  }
};

#endif
