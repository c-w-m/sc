#ifndef TOP_H
#define TOP_H

#include "test.h"

SC_MODULE(Top)
{
  Test test;
  sc_clock clock;

  SC_CTOR(Top)
  : test("test")
  , clock("clock", 10, SC_NS)
  {
    test.clock.bind(clock);
  }

  sc_trace_file* file;

  void start_of_simulation()
  {
    file = sc_create_vcd_trace_file("trace");
    sc_trace(file, test.clock, "clock");
    sc_trace(file, test.count, "count");
    sc_trace(file, test.data,  "data");
    sc_trace(file, test.odd,   "odd");

    sc_report_handler::set_actions(SC_ERROR, SC_DISPLAY);
    sc_report_handler::set_actions("producer", SC_INFO, SC_DO_NOTHING);
    sc_report_handler::set_actions("consumer", SC_INFO, SC_LOG);
    sc_report_handler::set_log_file_name("consumer.txt");
  }

  void end_of_simulation()
  {
    sc_close_vcd_trace_file(file);
  }

};

#endif
