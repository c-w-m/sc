#ifndef TOP_H
#define TOP_H

#include "producer.h"
#include "consumer.h"
#include "container.h"

class Top: public sc_module
{
  public:
    Producer  *producer;
    Consumer  *consumer;
    Container *container;

   Top(sc_module_name _name)
    {
      producer  = new Producer("producer");
      consumer  = new Consumer("consumer");
      container = new Container("container");

      producer->out.bind( container->producer1_export );
      consumer->in .bind( container->consumer1_export );
    }

};

#endif
