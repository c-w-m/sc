// definitions to improve readability
//defs.h

#ifndef DEF_H
#define DEF_H

#include "systemc"
using namespace sc_core;
using namespace sc_dt;
using std::cout;
using std::endl;

namespace BusT
{
  enum MEM_STATUS
  {
    ALL_READ_DONE,
    READ_DONE,
    WRITE_DONE
  };

  typedef sc_uint<8> addressT;
  typedef sc_uint<8> dataT;

  const addressT MemStatusReg = 0xFF;

  //conversion functions for MEM_STATUS/dataT
  inline MEM_STATUS to_mem_status(const dataT& d) {
    return static_cast<MEM_STATUS>(ALL_READ_DONE + d.to_int());
  }

  inline dataT to_dataT(const MEM_STATUS& m) {
    return dataT(m);
  }

  const char MSGTYPE[] = "DOULOS_BUS/";

};

#endif
