#include "coord.h"

Coord operator+ (const Coord& left, const Coord& right)
{
  Coord result;
  result.x = left.x + right.x;
  result.y = left.y + right.y;
  return result;
}

int operator* (const Coord& left, const Coord& right)
{
  int result;
  result = left.x * right.x + left.y * right.y;
  return result;
}

Coord operator* (const Coord& left, int right)
{
  Coord result;
  result.x = left.x * right;
  result.y = left.y * right;
  return result;
}

ostream& operator<< (ostream& os, const Coord& arg)
{
  os << "(" << arg.x << "," << arg.y << ")";
  return os;
}


NamedCoord operator+ (const NamedCoord& left, const NamedCoord& right)
{
  NamedCoord result;
  result.name = left.name + "." + right.name;
  result.coord = left.coord + right.coord;
  return result;
}

ostream& operator<< (ostream& os, const NamedCoord& arg)
{
  os << arg.name << "=" << arg.coord;
  return os;
}


void push(List*& list, const NamedCoord& nc)
{
  List* temp = new List;
  temp->coord = nc;
  temp->next  = list;
  list = temp;
}

void pop(List*& list, NamedCoord& nc)
{
  List* temp = list;
  nc   = list->coord;
  list = list->next;
  delete temp;
}
