#ifndef CONSUMER_H
#define CONSUMER_H

#include "queue_if.h"

class Consumer: public sc_module
{
  public:

    sc_port<queue_if> in;

    Consumer(sc_module_name _name)
    {
      SC_THREAD(T);
    }

    void T()
    {
      while(true)
      {
        char c = in->read();
        std::cout << "Read " << c << " at " << sc_time_stamp() << std::endl;
        if (c == 'z') sc_stop();
        wait(2, SC_NS);
      }
    }

    SC_HAS_PROCESS(Consumer);
};

#endif
