// proc.cpp
//
#include "proc.h"

using namespace BusT;
void Proc::do_proc()
{
  BusT::dataT data = 0;

  for (;;) {
    // Scan the address range looking memory status register to clear

    do {
      wait();
      system_bus->read(MemStatusReg, data, id);
    } while (!data);

    // Copy all values which have the LSB set (odd values) up to the block
    // of memory starting at address dest

    unsigned int copyto = dest;
    for (unsigned int i = src; i < num_items;  i++) {
      wait();
      system_bus->read(i, data, id);
      if (data[0] == 1) {
        wait();
        system_bus->write(copyto++, data, id);
      }
    }

    // Finally, clear the memory status register for this master
    wait();
    system_bus->write(MemStatusReg, to_dataT(READ_DONE), id);

  }
}
