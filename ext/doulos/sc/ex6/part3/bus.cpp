// bus.cpp
//
#include "bus.h"

using namespace BusT;

void Bus::write(BusT::addressT address, BusT::dataT data, int id)
{
  request_array[id].request = true;     // set request
  wait(request_array[id].proceed);      // wait to proceed

  if (address == MemStatusReg)
  {
    set_mem_status(to_mem_status(data),id);

    //cout << "Master " << id << " has set mem status reg to " << data
    //     << " at " << sc_time_stamp() << endl;
  }
  else
  {
    int s = find_interface(address);         // address decoding

    // slave write
    slave_port[s]->slave_write(address - starts[s], data);

    cout << "Master " << id << " has written "
      << "to address " << address << " data "
      << data << " at " << sc_time_stamp() << endl;
  }

  request_array[id].request = false;    // clear request

}

void Bus::read(BusT::addressT address, BusT::dataT &data, int id)
{
  request_array[id].request = true;     // set request
  wait(request_array[id].proceed);      // wait to proceed

  if (address == MemStatusReg)
  {
    data = get_mem_status(id);
    if (n_pending() <=1) set_mem_status(ALL_READ_DONE);

    //cout << "Master " << id << " has got " << data
    //     << " from mem status reg at " << sc_time_stamp() << endl;
  }
  else
  {
    int s = find_interface(address);         // address decoding

    // slave read
    slave_port[s]->slave_read(address- starts[s], data);

    cout << "Master " << id << " has read "
      << "from address " << address << " data "
      << data << " at " << sc_time_stamp() << endl;
  }
  request_array[id].request = false;    // clear request

}

void Bus::control_bus()
{
  int highest, max_request_count;

                                        // clear counters
  for (unsigned i = 0; i < n_masters; i++)
    request_count[i] = 0;

  for (;;) {
    wait();

    for (unsigned i = 0; i < n_masters; i++) {
      if (request_array[i].request == true)
        request_count[i]++;
    }

    highest = -1;
    max_request_count = 0;
    for (unsigned i = 0; i < n_masters; i++ ) {
      if (request_count[i] >= max_request_count) {
        max_request_count = request_count[i];
        highest = i;
      }
    }

    // If highest is > -1, then give the bus to the master with a
    // request pending for the greatest number of clock cycles
    // Reset the pending request count for that master.
    if (highest > -1) {
      request_array[highest].proceed.notify();
      request_count[highest] = 0;
    }
  }
}

int Bus::find_interface(BusT::addressT address)
{
  // check address range of each slave in turn
  for (int i = 0; i < slave_port.size(); i++)
    if (address >= starts[i] && address < (starts[i] + sizes[i]))
      return i;
  SC_REPORT_ERROR(BusT::MSGTYPE, "address out-of-range");
  return 1;
}

void Bus::end_of_elaboration()
{
  // create the request array
  request_array = new reqT[n_masters];
  request_count = new int[n_masters];

  // create the array for MemStatusReg
  mem_status = new bool[n_masters];
                                        // clear mem_status
  for (unsigned i = 0; i < n_masters; i++)
    mem_status[i] = false;

  const int n = slave_port.size();
  starts = new unsigned[n];
  sizes  = new unsigned[n];
  bool ok = true;
  for (int i = 0; i < n; i++) {
    slave_port[i]->get_map(starts[i], sizes[i]);

    // Check for overlapping address ranges
    for (int j = 0; j < i; j++)
      if (starts[i] < (starts[j] + sizes[j]) &&
      starts[j] < (starts[i] + sizes[i])) {
        cout << "Error: overlapping regions in Bus address map: "
        << starts[i] << ".." << starts[i] + sizes[i] - 1 << " and "
        << starts[j] << ".." << starts[j] + sizes[j] - 1 << endl;
      ok = false;
    }
  }
  sc_assert(ok);
}

// counts how many masters are bound to the bus channel
void Bus::register_port(sc_port_base &port_, const char* if_typename_)
{
  std::string nm(if_typename_);
  if ( nm == typeid(master_if).name() )
    n_masters++;
}

BusT::dataT Bus::get_mem_status(int id)
{
  //return 1 if flag set
  if (mem_status[id])
    return 1;
  else
    return 0;
}

void Bus::set_mem_status(MEM_STATUS status, int id)
{
  switch (status) {
    case ALL_READ_DONE:
      for (unsigned i=0; i<n_masters; i++) mem_status[i] = false;
      break;
    case READ_DONE:
      mem_status[id] = false;
      break;
    case WRITE_DONE:
      for (unsigned i=0; i<n_masters; i++) mem_status[i] = true;
  }
}

int Bus::n_pending()
{
  int count=0;
  for (unsigned i=0; i<n_masters; i++)
    if (mem_status[i]) count++;
  return count;
}
