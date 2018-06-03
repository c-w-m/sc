#include "queue.h"

Queue::Queue(sc_module_name nm, int _sz)
: sc_module(nm), sz(_sz)
{
  data = new char[sz];
  w = r = n = 0;
}

void Queue::write(char c)
{
  while (n == sz)
    wait(read_event);
  n++;
  data[w++] = c;
  if (w == sz) w = 0;
  write_event.notify();
}

char Queue::read()
{
  while (n == 0)
    wait(write_event);
  n--;
  char c = data[r++];
  if (r == sz) r = 0;
  read_event.notify();
  return c;
}
