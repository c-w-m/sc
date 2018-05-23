#include "door.h"

void Door::open()
{
  doorOpen = true;
}

void Door::close()
{
  doorOpen = true;
}

bool Door::isOpen()
{
  return doorOpen;
}

void Door::set_color(string arg)
{
  color = arg;
}

string Door::get_color()
{
  return color;
}

