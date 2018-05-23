#include "decode.h"

void Decode::action()
{

  out1->write(0);
  if (in0->read() && !in2->read())
  {
    out1->write(0);
  }
  else
  {
    if (!in0->read() && in1->read())
    {
      out1->write(1);
    }
    else
    {
      if (!in1->read() && in2->read())
      {
        out1->write(2);
      }
    }
  }
}
