#include "comparator.h"

void Comparator::action()
{
  out1->write(false);
  if (in1->read() > in2->read())
  {
    out1->write(true);
  }
}
