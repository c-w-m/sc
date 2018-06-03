#include "door.h"

int Door::count = 0;

Door::Door()
{
  doorOpen = false;
  color    = "";
  num = count++;
}

Door::Door(string _color, bool _open)
{
  doorOpen = _open;
  color    = _color;
  num = count++;
}

Door::Door(const Door& from)
{
  doorOpen = from.doorOpen;
  color    = from.color;
  num = count++;
}

Door::~Door()
{
}

Door& Door::operator= (const Door& from)
{
  if (this != &from)

  doorOpen = from.doorOpen;
  color    = from.color;
  return *this;
}

void Door::open()
{
  doorOpen = true;
}

void Door::close()
{
  doorOpen = true;
}

bool Door::isOpen() const
{
  return doorOpen;
}

void Door::set_color(string arg)
{
  color = arg;
}

string Door::get_color() const
{
  return color;
}

int Door::get_num() const
{
  return num;
}

ostream& operator<< (ostream& os, const Door& arg)
{
  os << "Door: open = " << arg.isOpen() << ", color = " << arg.get_color() << ", num = " << arg.get_num();
  return os;
}
