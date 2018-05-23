#include "maj.h"

void Maj::action()
{
  f = (a && b) || (b && c) || (c && a);
}
