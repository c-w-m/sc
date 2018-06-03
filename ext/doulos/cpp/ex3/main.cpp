#include <iostream>
using namespace std;

#include "door.h"

int main()
{
  Door d1("red");
  cout << "d1 = " << d1 << endl;

  Door d2("green");
  cout << "d2 = " << d2 << endl;

  Door* d3 = new Door("blue");
  cout << "d3 = " << *d3 << endl;

  Door d4 = d1;   // Copy ctor
  cout << "d4 = " << d4 << endl;

  d4 = d2;        // Assignment

  d4 = *d3;       // Assignment

  delete d3;

  Door d5;        // Default ctor
  cout << "d5 = " << d5 << endl;

  return 0;
}
