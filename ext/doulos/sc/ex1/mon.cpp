#include "mon.h"

void Mon::monitor()
{
  cout.width(6);
  cout << "a";
  cout.width(6);
  cout << "b";
  cout.width(6);
  cout << "c";
  cout.width(6);
  cout << "f" << endl;

  while (true) {
    wait();                             // wait for 1 clock cycle
    cout.width(6);
    cout << a->read();
    cout.width(6);
    cout << b->read();
    cout.width(6);
    cout << c->read();
    cout.width(6);
    cout << f->read() << endl;
  }
}
