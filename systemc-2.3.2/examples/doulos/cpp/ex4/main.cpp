#include <iostream>
#include <vector>
using namespace std;

#include "door.h"
#include "room.h"

int main()
{
  // Part 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  vector<Door> vec;              // empty vector of Doors
  cout << vec.size() << endl;    // output size to verify empty

  int n;
  cin >> n;                      // std input size of vector
  vec.resize(n);                 // resize to input

  vector<Door>::iterator it;     // loop through vector
  for (it = vec.begin(); it < vec.end(); it++)
  {
    string color;
    switch (rand() % 4)          // random color assignment
    {
      case 0: color = "red";
        break;
      case 1: color = "yellow";
        break;
      case 2: color = "blue";
        break;
      case 3: color = "green";
        break;
    }
    (*it).set_color(color);      // set color
  }

  while (!vec.empty())           // second loop to pop and remove
  {
    Door d = vec.back();         // get from back
    cout << d << endl;
    vec.pop_back();              // and remove
  }

  // Part 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  Room room(4);                  // Room contains vector of Doors
  room.open();                   // open all the Doors
  room.print();                  // print all 

  return 0;
}
