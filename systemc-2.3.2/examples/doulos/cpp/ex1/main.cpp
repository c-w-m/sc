#include "coord.h"

int main()
{
  Coord p = {1,2};
  Coord q = {3,4};
  cout << "p + q = " << p + q << endl;
  cout << "p * q = " << p * q << endl;
  cout << "p * 2 = " << p * 2  << endl;

  NamedCoord c1;
  c1.name = "fred";
  c1.coord = p;

  NamedCoord c2;
  c2.name = "george";
  c2.coord = q;

  cout << "c1 + c2 = " << c1 + c2 << endl;

  List* list = 0;
  push(list, c1);
  push(list, c2);

  NamedCoord temp;
  pop(list, temp);
  cout << "temp = " << temp << endl;
  pop(list, temp);
  cout << "temp = " << temp << endl;

  return 0;
}
