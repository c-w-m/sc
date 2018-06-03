#ifndef STOPWATCH_H
#define STOPWATCH_H

#include "counter.h"

class Stopwatch
{
private:
  Counter* c_secs;
  Counter* c_mins;
  Counter* c_hrs;

public:
  Stopwatch(int h = 0, int m = 0, int s = 0);
  void count();
  int hrs() const;
  int mins() const;
  int secs() const;
};

#endif
