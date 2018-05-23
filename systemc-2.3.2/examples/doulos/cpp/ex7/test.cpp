#include "register.h"
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

int main (int argc, char * argv[])
{
  Register<int> R(0,"RegInt");

  vector<Register<float> *> vr(3);

  for (unsigned i = 0; i<vr.size(); i++)
  {
    ostringstream oss;
    oss << "Reg" << i << ends;
    vr[i] = new Register<float>(float(i), oss.str().c_str()); 
    cout << vr[i]->read() << endl;
  }

  return 0;

}


