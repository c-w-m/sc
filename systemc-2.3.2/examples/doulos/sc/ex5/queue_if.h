#ifndef QUEUE_IF_H
#define QUEUE_IF_H

#include "systemc"
using namespace sc_core;

class queue_if: virtual public sc_interface
{
  public:
    virtual void write(char c) = 0;
    virtual char read() = 0;
};

#endif
