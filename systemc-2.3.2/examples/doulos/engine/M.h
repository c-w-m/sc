#ifndef M_H
#define M_H

#include "systemc"
#include <string>
#include "Did_update.h"
using namespace sc_core;

// SC_MODULE(M) used to demo SC timing
SC_MODULE(M) {

  const char* EMPTYSTR = NULL;
  sc_in<bool> ckp;
  sc_out<int> s1p;
  
  sc_signal<int> s2;
  sc_event e1, e2;
  
  // SC_METHOD(P1_meth), dont_initialize(), sensitive << s2
  void P1_meth(void);
  // SC_THREAD(P3_thrd)
  void P3_thrd(void);
  // SC_THREAD(P2_thrd), sensitive << ckp.pos()
  void P2_thrd(void);
  
  // M ctor, initialization list used to set temp, count, and prev_*
  SC_CTOR(M) 
    : temp(9)
    , count(0)
    , prev_time(99)
    , prev_ck(true)
    , prev_s1(99)
    , prev_s2(99)
    , prev_temp(99)
  {
    std::cout << "T -5 : ----- Elaborating (ctor registering P3_thrd)" << std::endl;
    SC_THREAD(P3_thrd);

    std::cout << "T -4 : ----- Elaborating (ctor registering P2_thrd)" << std::endl;
    SC_THREAD(P2_thrd);
    sensitive << ckp.pos();

    std::cout << "T -3 : ----- Elaborating (ctor registering P1_meth)" << std::endl;
    SC_METHOD(P1_meth);
    sensitive << s2;
    dont_initialize();

    SC_METHOD(mon);
    sensitive << ckp;
    dont_initialize();
  }

  // Monitor the clock, SC_METHOD(mon), sensitive << ckp, dont_initialize();
  void mon(void){ Eval("ck", 1); }
  unsigned int count;

private:
  int temp;

  // Special variables and routines to monitor execution follow
  Did_update me;
  double prev_time;
  int prev_temp, prev_s1, prev_s2;
  bool prev_ck;
  
  // Used to trace simulation
  void Eval(const char* message, int type = 0){ 
    
    if (me.updated) {
      Changes(message);        // change trace
      me.clear();
    }

    me.watch(&count);
    count++;
    std::cout << "T " << std::setfill(' ') << std::setw(2) << count;
    std::cout << std::setfill(' ');
    
    if (prev_time == sc_time_stamp() / sc_time(1, SC_NS)) {
      std::cout << " :      ";
    }
    else {
      std::cout << " : " << std::setw(2) << int(sc_time_stamp() / sc_time(1, SC_NS)) 
        << " ns";
    }

    switch (type) {
      case  1: std::cout << " MNTR "; break;
      default: std::cout << " EVAL "; break;
    }

    if (ckp->read() == prev_ck) std::cout << "     ";
    else                        std::cout << " ck=" << ckp->read();
    if (s1p->read() == prev_s1) std::cout << "     ";
    else                        std::cout << " s1=" << s1p->read();
    if (s2.read() == prev_s2)   std::cout << "     ";
    else                        std::cout << " s2=" << s2.read();
    if (temp == prev_temp)      std::cout << "       ";
    else                        std::cout << " temp=" << temp;
   
    std::cout << " : " << message << std::endl;
    
    prev_time = sc_time_stamp() / sc_time(1, SC_NS);
    prev_ck = ckp->read();
    prev_s1 = s1p->read();
    prev_s2 = s2.read();
    prev_temp = temp;
  }

  // Display variable changes if any
  void Changes(const char* message) {
    
    if (ckp->read() != prev_ck 
      || s1p->read() != prev_s1 
      || s2.read() != prev_s2 
      || temp != prev_temp) {

      // report change(s)
      std::cout << "             CHNG ";
      if (ckp->read() == prev_ck) std::cout << "     ";
      else                        std::cout << " ck=" << ckp->read();
      if (s1p->read() == prev_s1) std::cout << "     ";
      else                        std::cout << " s1=" << s1p->read();
      if (s2.read() == prev_s2)   std::cout << "     ";
      else                        std::cout << " s2=" << s2.read();
      if (temp == prev_temp)      std::cout << "       ";
      else                        std::cout << " temp=" << temp;

      if (message != NULL && strlen(message)>0)
        std::cout << " : " << message << std::endl;
      else
        std::cout << std::endl;

      // update current value(s)
      prev_ck = ckp->read();
      prev_s1 = s1p->read();
      prev_s2 = s2.read();
      prev_temp = temp;
    }
  }

};

// SC_METHOD(P1_meth), dont_initialize(), sensitive << s2
void M::P1_meth(void) {
  Eval("P1_meth");              // eval trace
  temp = s2.read();             // read s2, none-event
  s1p->write(temp + 1);         // write s1, event
  e2.notify(2, SC_NS);          // event, notify in 2 ns
  Changes(EMPTYSTR);            // change trace
}

// SC_THREAD(P2_thrd), sensitive << ckp.pos()
void M::P2_thrd(void) {
//A: first time call
  Eval("P2_thrd.A");            // eval trace
  s2.write(5);                  // write s2, event
  e1.notify();                  // event, immediate
  Changes(EMPTYSTR);            // change trace
  wait();                       // wait for next ckp.pos()

//B: loop twice with 1 ns wait
  Eval("P2_thrd.B");            // eval trace
  for (int i = 7; i<9; i++){
    s2.write(i);                // write s2
    Changes(EMPTYSTR);          // change trace
    wait(1, SC_NS);             // wait for 1 ns
//C: 
    Eval("P2_thrd.C");          // eval trace
    e1.notify(SC_ZERO_TIME);    // event, next delta cycle
    Changes(EMPTYSTR);          // change trace
    wait();                     // wait for next ckp.pos()
    Eval("P2_thrd.B");          // eval trace
  }
  Eval("P2_thrd.EXITED");       // eval trace - FINAL
}

// SC_THREAD(P3_thrd)
void M::P3_thrd(void) {
//D:
  Eval("P3_thrd.D");            // report entry
  while (true) {
    Changes(EMPTYSTR);          // change trace
    wait(e1 | e2);              // wait for P1_meth.e2 or P2_thrd.e1
//E:
    Eval("P3_thrd.E");          // eval trace
    std::cout << "NOTE : " << std::setw(5) << sc_time_stamp();
    std::cout << " ==============================================" << std::endl;
    std::cout << std::endl;
  }
}

#endif