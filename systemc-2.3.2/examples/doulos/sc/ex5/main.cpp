#include "systemc"
using namespace sc_core;

#include "top.h"

int sc_main(int argc, char* argv[])
{
  Top top("top");

  sc_start();

  return 0;

}
