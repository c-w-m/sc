// main.cpp
//

#include "top.h"

int sc_main(int argc, char* argv[])
{
  Top top1("top1");

  sc_start(125000, SC_NS);
  sc_stop(); // triggers end_of_simulation() callback

  return 0;

}
