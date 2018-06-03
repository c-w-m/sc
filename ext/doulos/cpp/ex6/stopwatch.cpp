#include "stopwatch.h"
#include "newcounter.h"

Stopwatch::Stopwatch(int h, int m, int s)
{
  c_hrs  = new Newcounter(h,10,"Hours");
  c_mins = new Newcounter(m,60,"Mins");
  c_secs = new Newcounter(s,60,"Sec");
}

void Stopwatch::count()
{
  c_secs->count();
  if (c_secs->carry_out())
  {
    c_mins->count();
    if (c_mins->carry_out()) c_hrs->count();
  }
}

int Stopwatch::secs() const { return c_secs->read(); }

int Stopwatch::mins() const { return c_mins->read(); }

int Stopwatch::hrs() const { return c_hrs->read(); }
