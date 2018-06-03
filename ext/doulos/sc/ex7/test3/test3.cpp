
#include "csp_chan.h"

struct M1: public sc_module
{
  SC_HAS_PROCESS(M1);

  sc_port<csp_out_if<int> > ch;

  void p1() {
    ch->out(1);
  }

  void p2() {
    ch->out(1);
  }

  M1 (sc_module_name nm) {
    SC_THREAD(p1);
    SC_THREAD(p2);
  }
};

struct M2: public sc_module
{
  SC_HAS_PROCESS(M2);

  sc_port<csp_in_if<int> > ch;

  void p3() {
    int i;
    i = ch->in();
    cout << i << endl;
  }

  void p4() {
    int i;
    i = ch->in();
    cout << i << endl;
  }

  M2 (sc_module_name nm) {
    SC_THREAD(p3);
    SC_THREAD(p4);
  }
};

struct Test3: public sc_module
{
  SC_HAS_PROCESS(Test3);

  M1 *m1;
  M2 *m2;

  csp_chan<int> ch;

  Test3 (sc_module_name nm)
  : sc_module(nm), ch("ch") {
    m1 = new M1("m1");
    m1->ch(ch);

    m2 = new M2("m2");
    m2->ch(ch);
  }
};


int sc_main (int argc, char* argv[])
{
  Test3 test("test");

  sc_start();

  return 0;
}
