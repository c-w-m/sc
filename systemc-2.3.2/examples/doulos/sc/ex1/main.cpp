#include "systemc.h"
#include "top.h"

int sc_main(int argc, char* argv[])
{
  // Instantiate the top-level module
  Top top1("top");

  sc_start();

  return 0;
}
