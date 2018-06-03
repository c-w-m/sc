#ifndef COUNTER_H
#define COUNTER_H

#include "register.h"

class Counter : public Register
{
private:
  int modulus;
  bool overflow;

public:
  Counter(int init, int mod, string name);
  virtual ~Counter();
  bool carry_out() const;
  virtual void count();
};

#endif
