#ifndef COORD_H
#define COORD_H

#include <iostream>
#include <string>
using namespace std;

struct Coord
{
  int x, y;
};

Coord operator+ (const Coord& left, const Coord& right);

int operator* (const Coord& left, const Coord& right);

Coord operator* (const Coord& left, int right);

ostream& operator<< (ostream& os, const Coord& arg);

struct NamedCoord
{
  string name;
  Coord  coord;
};

NamedCoord operator+ (const NamedCoord& left, const NamedCoord& right);

ostream& operator<< (ostream& os, const NamedCoord& arg);


struct List
{
  NamedCoord coord;
  List*      next;
};

void push(List*& list, const NamedCoord& nc);

void pop(List*& list, NamedCoord& nc);

#endif
