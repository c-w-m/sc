#ifndef SORTER_H
#define SORTER_H

#include "systemc"
using namespace sc_core;

#include "comparator.h"
#include "mux.h"
#include "decode.h"

SC_MODULE(Sorter)
{
  // ports
  sc_in<int>  a, b, c;
  sc_out<int> biggest;

  // declare the sub-modules
  Comparator *c1;
  Comparator *c2;
  Comparator *c3;
  Mux        *m1;
  Decode     *d1;

  // internal signals
  sc_signal<bool> a_gt_b, b_gt_c, c_gt_a;
  sc_signal<int>  select;

  SC_CTOR(Sorter)
  {
    c1 = new Comparator("c1");
    c2 = new Comparator("c2");
    c3 = new Comparator("c3");
    m1 = new Mux("m1");
    d1 = new Decode("d1");
    
    c1->in1(a);
    c1->in2(b);
    c1->out1(a_gt_b);

    c2->in1(b);
    c2->in2(c);
    c2->out1(b_gt_c);

    c3->in1(c);
    c3->in2(a);
    c3->out1(c_gt_a);

    d1->in0(a_gt_b);
    d1->in1(b_gt_c);
    d1->in2(c_gt_a);
    d1->out1(select);

    m1->sel(select);
    m1->in0(a);
    m1->in1(b);
    m1->in2(c);
    m1->biggest(biggest);

  }
};

#endif
