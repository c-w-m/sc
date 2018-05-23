#include "mux.h"

void Mux::action()
{
  switch (sel->read()) {
    case 0:
      biggest->write( in0->read() );
      break;
    case 1:
      biggest->write( in1->read() );
      break;
    case 2:
      biggest->write( in2->read() );
      break;
    default:
      biggest->write( in0->read() );                    // default value
      break;
  }

}
