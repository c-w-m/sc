#ifndef MASTER_IF_H
#define MASTER_IF_H

// master_if.h
//
#include "defs.h"

class master_if : virtual public sc_interface
{
  public:
    virtual void write(BusT::addressT address, BusT::dataT  data, int id) = 0;
    virtual void read (BusT::addressT address, BusT::dataT &data, int id) = 0;
};

#endif
