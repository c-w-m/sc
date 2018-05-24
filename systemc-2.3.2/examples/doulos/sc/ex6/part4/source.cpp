// source.cpp
//
#include "source.h"

using namespace BusT;
void Source::do_source()
{

  BusT::dataT wrdata = 0, rddata = 0;
  const int EOD = 255;

  for (;;) {
    // write random numbers between 0 and EOD-1 to the bus
    for (unsigned int i = 0; i < num_items; i++) {
      wait();
      wrdata = rand() % EOD;
      system_bus->write(src + i, wrdata, id);
    }

    // write to memory status register
    wait();
    system_bus->write(MemStatusReg, to_dataT(WRITE_DONE), id);

    // wait for data to be processed, memory status register cleared
    for (;;) {
      wait();
      system_bus->read(MemStatusReg, rddata, id);
      if (!rddata) break;
    }
  }
}
