#ifndef ROOM_H
#define ROOM_H

#include <vector>
using namespace std;

#include "door.h"

class Room
{
private:
  const int nd;
  vector<Door> doors;

public:
  Room(int n)
  : nd(n)
  , doors(n) {}            // ctor with dim in intializer

  void open()
  {
    for (unsigned int i = 0; i < doors.size(); i++)
      doors[i].open();
  }

  void print()             // print state of each Door [open | closed]
  {
    for (unsigned int i = 0; i < doors.size(); i++)
      cout << "Door " << i << " is " << (doors[i].isOpen() ? "open" : "closed" ) << endl;
  }
};

#endif
