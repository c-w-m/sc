#ifndef DOOR_H
#define DOOR_H

#include <string>
using namespace std;

class Door
{
private:
  bool doorOpen;
  string color;

public:
  void open();
  void close();
  bool isOpen();

  void set_color(string arg);
  string get_color();
};

#endif
