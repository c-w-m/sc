#ifndef COUNTER_H
#define COUNTER_H

#include "register.h"

class Counter : public Register<int>
{
private:
  int modulus;
  bool overflow;

public:
  Counter(int init, int mod, string name); //constructor
  bool carry_out() const;
  void count();
};

#endif
