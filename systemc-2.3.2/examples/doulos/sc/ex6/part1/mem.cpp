// mem.cpp
//
#include "mem.h"

void Mem::slave_write(BusT::addressT address, BusT::dataT data)
{
  if ((address < 0) || (address >= size)) {
    SC_REPORT_ERROR(BusT::MSGTYPE, "write address out of range ");
  }
  else {
    buf[address] = data;
  }
}

void Mem::slave_read(BusT::addressT address, BusT::dataT &data)
{
  if ((address < 0) || (address >= size)) {
    SC_REPORT_ERROR(BusT::MSGTYPE, "read address out of range ");
  }
  else {
    data = buf[address];
  }
}

void Mem::get_map(unsigned int &mem_start, unsigned int &mem_size)
{
  // return memory address map
  mem_start = start;
  mem_size  = size;
}

// -------------------------------------------------------
// Initialisation routine

void Mem::init()
{
  buf = new BusT::dataT[size];
  for (unsigned int i = 0; i < size; i++)
    buf[i] = 0;
}

// -------------------------------------------------------
// Debug routines

void Mem::status()
{
  cout << "Slave status" << endl;
  cout << "------------" << endl;
  cout << name() << " ";
  cout << " Size = " << size;
  cout << " Start Address = " << start;
  cout << endl << endl;
}

void Mem::dump(unsigned int start_addr, unsigned int end_addr)
{
  if (start_addr < 0) start_addr = 0;
  if (end_addr >= (size - 1)) end_addr = size - 1;

  cout << name() << " contents:" << endl;
  cout << "--------------" << endl;
  for (unsigned int i = start_addr; i <= end_addr; i++) {
    cout << start+i << " " << buf[i] << endl;
  }
  cout << endl;
}

void Mem::add_trace(unsigned int address)
{
  std::string nm( name() );
  nm = nm + "(" + sc_uint<32>(address+start).to_string().c_str() + ")";

  if ((address >= 0) && (address < size) )
    sc_trace(trace_file, buf[address], nm.c_str());
  else
    SC_REPORT_WARNING(BusT::MSGTYPE, "address to trace out of range");
}
