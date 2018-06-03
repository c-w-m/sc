#include "door.h"

int Door::count = 0;    // static init

Door::Door()
{
  doorOpen = false;
  color    = "";
  num = count++;
  cout << "Door() called, color = " << color << ", num = " << num << endl;
}

Door::Door(string _color, bool _open)
{
  doorOpen = _open;
  color    = _color;
  num = count++;
  cout << "Door(bool,string) called, color = " << color << ", num = " << num << endl;
}

Door::Door(const Door& from)
{
  doorOpen = from.doorOpen;
  color    = from.color;
  num = count++;
  cout << "Door(const Door&) called, color = " << color << ", num = " << num << endl;
}

Door::~Door()
{
  cout << "~Door() called, color = " << color << ", num = " << num << endl;
}

Door& Door::operator= (const Door& from)
{
   if (this != &from) {
      doorOpen = from.doorOpen;
      color = from.color;
      num = from.num;
      cout << "operator= called, color = " << color << ", num = " << num << endl;
   }
   else {
      cout << "asignment to self, do nothing" << endl;
   }
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
