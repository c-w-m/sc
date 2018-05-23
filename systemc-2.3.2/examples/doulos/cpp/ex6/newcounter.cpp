#include <iostream>
using namespace std;

#include "newcounter.h"

Newcounter::Newcounter(int init, int mod, string name)
: Counter(init, mod, name)
{
}

Newcounter::~Newcounter(){}

void Newcounter::count()
{
  Counter::count();
  cout << "count = " << read() << endl;
}
