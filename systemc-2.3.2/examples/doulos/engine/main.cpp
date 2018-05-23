#include <systemc.h>
#include <iomanip>
#include "M.h"

using namespace sc_core;

const int LINE_WDTH = 59;

int sc_main(int argc, char* argv[])
{
  std::cout << std::setfill('~') << std::setw(LINE_WDTH) << "~" << std::endl;
  // Begin Elaboration... ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  std::cout << "T -6 : ----- MAIN Elaborating (constructing/binding)" << std::endl;
  sc_clock ck("ck", sc_time(6, SC_NS), 0.5, sc_time(3, SC_NS));
  std::cout << "             6 ns period, 50% duty cycle, 3 ns 1st pos edge" << std::endl;
  sc_signal<int> s1;

  std::cout << "---- : ----- MAIN Elaboration (M struct)" << std::endl;
  M m("m");
  
  std::cout << "T -2 : ----- MAIN Elaboration (Connecting ck)" << std::endl; 
  m.ckp(ck);
  
  std::cout << "T -1 : ----- MAIN Elaborating (Connecting s1)" << std::endl;  
  m.s1p(s1);
  
  std::cout << "T  0 : ----- MAIN Elaboration finished" << std::endl;
  // Elaboration complete! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  // Begin simulation... ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  std::cout << "T  0 : ----- MAIN Starting simulation" << std::endl;
  std::cout << "             30 ns simulation" << std::endl;
  std::cout << std::setfill('~') << std::setw(LINE_WDTH) << "~" << std::endl;

  sc_start(30, SC_NS); // Simulate for 20 nano-seconds

  // Simulation complete! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  std::cout << std::setfill('~') << std::setw(LINE_WDTH) << "~" << std::endl;
  std::cout << "T " << ++m.count << " : "
    << int(sc_time_stamp() / sc_time(1, SC_NS)) << " ns"
    << " MAIN Simulation stopped" << std::endl;
  std::cout << std::endl;
  
  return 0;
}
