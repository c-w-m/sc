#include "mon.h"

#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

void Mon::action()
{

  // write header
  cout << setw(4)  << "a"
    << setw(4)  << "b"
    << setw(4)  << "c"
    << setw(10) << "biggest" << endl;

  for (;;)
  {
    wait();                             // wait for 1 clock cycle
    cout << setw(4)  << a->read()
      << setw(4)  << b->read()
      << setw(4)  << c->read()
      << setw(10) << biggest->read()  << endl;
  }
}
