#ifndef CONTAINER_H
#define CONTAINER_H

#include "queue.h"

class Container: public sc_module
{
  public:
    sc_export<queue_if> producer1_export;
    sc_export<queue_if> producer2_export;

    sc_export<queue_if> consumer1_export;
    sc_export<queue_if> consumer2_export;

    Queue    queue1;
    Queue    queue2;

    Container(sc_module_name _name)
    : queue1("queue1",4)
    , queue2("queue2",4)
    {
      producer1_export.bind( queue1 );
      producer2_export.bind( queue2 );
      consumer1_export.bind( queue1 );
      consumer2_export.bind( queue2 );
    }
};

#endif
