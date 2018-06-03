
#include "csp_chan.h"

struct M1: public sc_module
{
  SC_HAS_PROCESS(M1);

  sc_port<csp_out_if<int> > ch;

  void p1() {
    ch->out(1);

    wait(1, SC_NS);
    ch->out(2);

    wait(1, SC_NS);
    ch->out(3);

    wait(2, SC_NS);
    ch->out(4);

    wait(3, SC_NS);
    ch->out(5);
    ch->out(6);
    ch->out(7);

    wait(1, SC_NS);
    ch->out(8);
    wait(1, SC_NS);
    ch->out(9);
    wait(1, SC_NS);
    ch->out(10);
    ch->out(11);
    ch->out(12);
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

    wait(1, SC_NS);
    i = ch->in();
    cout << i << endl;

    wait(2, SC_NS);
    i = ch->in();
    cout << i << endl;

    wait(1, SC_NS);
    i = ch->in();
    cout << i << endl;

    wait(3, SC_NS);
    i = ch->in();
    cout << i << endl;

    wait(1, SC_NS);
    i = ch->in();
    cout << i << endl;

    wait(1, SC_NS);
    i = ch->in();
    cout << i << endl;

    wait(1, SC_NS);
    i = ch->in();
    cout << i << endl;
    i = ch->in();
    cout << i << endl;
    i = ch->in();
    cout << i << endl;

    i = ch->in();
    cout << i << endl;
    i = ch->in();
    cout << i << endl;

    wait(100, SC_NS);
    i = ch->in();
    cout << i << endl;

  }

  M2 (sc_module_name nm) {
    SC_THREAD(p2);
  }
};

struct Test4: public sc_module
{
  SC_HAS_PROCESS(Test4);

  M1 *m1;
  M2 *m2;

  csp_chan<int> ch;

  Test4 (sc_module_name nm)
  : sc_module(nm), ch("ch") {
    m1 = new M1("m1");
    m1->ch(ch);

    m2 = new M2("m2");
    m2->ch(ch);

    SC_METHOD(monitor)
      sensitive << ch;
    dont_initialize();
  }

  void monitor() {
    cout << "Transfer" << endl;
  }
};


int sc_main (int argc, char* argv[])
{
  Test4 test("test");

  sc_start();

  return 0;
}
