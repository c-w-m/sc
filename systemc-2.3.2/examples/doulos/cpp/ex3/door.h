#ifndef DOOR_H
#define DOOR_H

#include <iostream>
#include <string>
using namespace std;

class Door
{
private:
  bool doorOpen;
  string color;
  int num;
  static int count;

public:
  Door();
  Door(string _color, bool _open = false);
  Door(const Door& from);
  ~Door();

  Door& operator= (const Door& from);

  void open();
  void close();
  bool isOpen() const;

  void   set_color(string arg);
  string get_color() const;
  int    get_num() const;
};

ostream& operator<< (ostream& os, const Door& arg);

#endif
