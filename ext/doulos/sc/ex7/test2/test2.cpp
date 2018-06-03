
#include "csp_chan.h"

struct M1: public sc_module
{
  SC_HAS_PROCESS(M1);

  sc_port<csp_out_if<int> > ch;

  void p1() {
    ch->out(1);
  }

  M1 (sc_module_name nm) {
    SC_THREAD(p1);
  }
};

struct M2: public sc_module
{
  SC_HAS_PROCESS(M2);

  sc_port<csp_in_if<int> > ch;

  void p2() {
    int i;
    i = ch->in();
    cout << i << endl;
  }

  M2 (sc_module_name nm) {
    SC_THREAD(p2);
  }
};

struct Test2: public sc_module
{
  SC_HAS_PROCESS(Test2);

  M1 *m1a, *m1b;
  M2 *m2a, *m2b;

  csp_chan<int> ch;

  Test2 (sc_module_name nm)
  : sc_module(nm), ch("ch") {

    m1a = new M1("m1a");
    m1a->ch(ch);

    m1b = new M1("m1b");
    m1b->ch(ch);

    m2a = new M2("m2a");
    m2a->ch(ch);

    m2b = new M2("m2b");
    m2b->ch(ch);
  }
};


int sc_main (int argc, char* argv[])
{
  Test2 test("test");

  sc_start();

  return 0;
}
