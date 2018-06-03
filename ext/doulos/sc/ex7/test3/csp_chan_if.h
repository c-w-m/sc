
#ifndef CSP_CHAN_IF_H
#define CSP_CHAN_IF_H

#include "systemc"
using namespace sc_core;
using std::cout;
using std::endl;

template <class T>
class csp_out_if
: virtual public sc_interface
{
  public:

    virtual void out(const T&) = 0;
};

template <class T>
class csp_in_if
: virtual public sc_interface
{
  public:

    virtual const T& in() = 0;
};

#endif
