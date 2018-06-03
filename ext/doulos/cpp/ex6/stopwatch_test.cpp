// Essential C++ Exercise 6
// stopwatch_test.cpp - test bench

#include "stopwatch.h"
#include <iostream>
#include <cassert>
#include <iomanip>
using namespace std;

void check(Stopwatch &SW, int hrs, int mins, int secs)
{
  cout << "Time = " << setw(2) << SW.hrs()
    << ":" << setw(2) << SW.mins()
    << ":" << setw(2) << SW.secs()
      << " (expected " << setw(2) << hrs
    << ":" << setw(2) << mins
    << ":" << setw(2) << secs << ")"
      << endl;
  assert ((SW.hrs() == hrs) && (SW.mins() == mins) && (SW.secs() == secs));
}


int main ()
{
  int i;

  //create StopWatch object with default intial value
  Stopwatch SW1;

  check(SW1, 0,0,0);

  //count for 1 second
  SW1.count();
  check(SW1, 0,0,1);

  //count up to 59 seconds
  for (i = 0; i < 58; i++) SW1.count();
  check(SW1, 0,0,59);

  //count for another 1 second
  SW1.count();
  check(SW1, 0,1,0);

  //count up to 1 minute 30 seconds
  for (i = 0; i < 30; i++) SW1.count();
  check(SW1, 0,1,30);

  //count for another 30 seconds
  for (i = 0; i < 30; i++) SW1.count();
  check(SW1, 0,2,0);

  //count up to a second short of an hour
  for (i = 0; i < 60*58-1; i++) SW1.count();
  check(SW1, 0,59,59);

  //count for another 1 second
  SW1.count();
  check(SW1, 1,0,0);

  //count up to a second short of 9 hours
  for (i = 0; i < 7*60*60+59*60+59; i++) SW1.count();
  check(SW1, 8,59,59);

  //count for another 1 second
  SW1.count();
  check(SW1, 9,0,0);

  return 0;
}
