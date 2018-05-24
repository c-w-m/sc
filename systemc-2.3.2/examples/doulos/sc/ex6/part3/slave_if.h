#ifndef SLAVE_IF_H
#define SLAVE_IF_H

// slave_if.h
//
#include "defs.h"

class slave_if : virtual public sc_interface
{
  public:
    virtual void slave_write(BusT::addressT address, BusT::dataT  data) = 0;
    virtual void slave_read (BusT::addressT address, BusT::dataT &data) = 0;
    virtual void get_map(unsigned int &start, unsigned int &size)  = 0;
};

#endif
