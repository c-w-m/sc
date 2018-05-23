#ifndef NEWCOUNTER_H
#define NEWCOUNTER_H

#include "counter.h"

class Newcounter : public Counter
{
private:
  ~Newcounter();
public:
  Newcounter(int init, int mod, string name);
  virtual void count();
};

#endif
