#ifndef QUEUE_H
#define QUEUE_H

#include "queue_if.h"

class Queue: public queue_if, public sc_module
{
  public:
    // Constructor. 2nd argument gives length of queue
    Queue(sc_module_name nm, int _sz);

    // Blocking write and read
    virtual void write(char c);
    virtual char read();

  private:
    char* data;
    int sz, w, r, n;
    sc_event write_event, read_event;

};

#endif
