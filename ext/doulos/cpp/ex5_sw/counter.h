#ifndef COUNTER_H
#define COUNTER_H

#include "register.h"

class Counter : public Register
{
private:
  const int modulus;
  bool overflow;

public:
  Counter(int init, int mod, string name);
  bool carry_out() const;
  void count();
};

#endif
