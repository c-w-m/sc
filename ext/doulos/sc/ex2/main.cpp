#include "systemc"
#include "top.h"

int sc_main(int argc, char* argv[])
{

  Top top1("top1");

  sc_core::sc_start();

  return 0;

}
