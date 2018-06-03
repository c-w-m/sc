#include "stim.h"

void Stim::action()
{
  wait();

  for (int i = 0; i < 3; i++)
  {
    a->write(i);
    for (int j = 0; j < 3; j++ )
    {
      b->write(j);
      for (int k = 0; k < 3; k++)
      {
        c->write(k);
        wait();
      }
    }
  }

  a->write(0);
  b->write(0);
  c->write(0);
  wait();

  sc_stop();
}
