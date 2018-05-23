#include <iostream>
using namespace std;

#include "door.h"

void func(Door d1, Door* d2, Door& d3)
{
  d1.open();
  d1.set_color("red");
  d1.close();

  d2->open();
  d2->set_color("green");
  d2->close();

  d3.open();
  d3.set_color("blue");
  d3.close();
}

void print(Door& d1, Door& d2, Door& d3)
{
  cout << d1.get_color() << ", " << d2.get_color() << ", " << d3.get_color() << endl;
}

int main()
{
  Door d1;
  Door d2;
  Door d3;

  print(d1, d2, d3);
  func(d1, &d2, d3);
  print(d1, d2, d3);

  Door* d4 = new Door;
  Door* d5 = new Door;
  Door* d6 = new Door;

  print(*d4, *d5, *d6);
  func(*d4, d5, *d6);
  print(*d4, *d5, *d6);

  return 0;
}
