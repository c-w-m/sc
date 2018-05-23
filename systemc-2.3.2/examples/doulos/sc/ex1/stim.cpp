#include "stim.h"

void Stim::action()
{

  wait();
  a = false; b = false; c = false;
  wait();
  a = false; b = false; c = true;
  wait();
  a = false; b = true; c = false;
  wait();
  a = false; b = true; c = true;
  wait();
  a = true; b = false; c = false;
  wait();
  a = true; b = false; c = true;
  wait();
  a = true; b = true; c = false;
  wait();
  a = true; b = true; c = true;
  wait();

  sc_stop();
}
