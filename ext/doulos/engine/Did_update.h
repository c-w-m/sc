#ifndef DID_UPDATE_H
#define DID_UPDATE_H

#include <iostream>
#include <iomanip>

#include "systemc"
using namespace sc_core;

// This is special primitive channel to notify entry by the simulator
// into the update state. In other words, end of a delta-cycle.
struct Did_update : public sc_prim_channel {
  unsigned int *counter;
  bool updated;

  void watch(unsigned int * count) {
    counter = count;
    request_update();
  }

  void clear(void) { 
    updated = false; 
  }

  void update(void) {
    (*counter)++;       // Increment counter
    updated = true;     // set flag true
    std::cout << "T " << std::setfill(' ') << std::setw(2) << *counter
      << " : ----- UPDT  ---- ---- ---- ------ : ----------------" << std::endl;
  }

};

#endif
