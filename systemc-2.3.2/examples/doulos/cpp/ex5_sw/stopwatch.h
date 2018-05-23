#ifndef STOPWATCH_H
#define STOPWATCH_H

#include "counter.h"

class Stopwatch
{
public:
  Stopwatch(int h = 0, int m = 0, int s = 0); //constructor
  void count();
  // methods to return current time
  int hrs() const;
  int mins() const;
  int secs() const;

private:
  Counter c_secs, c_mins, c_hrs;
};

#endif
