#ifndef PRODUCER_H
#define PRODUCER_H

#include "queue_if.h"

class Producer: public sc_module
{
  public:

    sc_port<queue_if> out;

    Producer(sc_module_name _name)
    {
      SC_THREAD(T);
    }

    void T()
    {
      for (char c = 'a'; c <= 'z'; c++)
      {
        out->write(c);
        std::cout << "Wrote " << c << " at " << sc_time_stamp() << std::endl;
        wait(1, SC_NS);
      }
    }

    SC_HAS_PROCESS(Producer);
};

#endif
