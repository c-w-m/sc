#include "counter.h"

Counter::Counter(int init, int mod, string name)
  : modulus(mod)
  , Register(init, name)
{
  overflow = false;
}

Counter::~Counter(){}

void Counter::count()
{
  int cnt = read() + 1;
  if (cnt >= modulus) 
  {
    overflow = true;
    cnt = 0;
  }
  else 
  {
    overflow = false;
  }

  write(cnt);
}

bool Counter::carry_out() const
{
  return overflow;
}

