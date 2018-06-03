#include "counter.h"
#include <cassert>
#include <iostream>

using namespace std;

void check(Counter &C, int value, bool overflow, bool checkoverflow)
{
  cout << "Counter ID " << C.id() <<
    ": count = " << C.read() << " (expected " << value << ")";
  if (C.read() == value)
    cout << " PASS value check";
  else {
    cout << " FAIL value check";
    assert((C.read() == value));
  }
  if (checkoverflow) {
    cout << boolalpha << " carry = " << C.carry_out() <<
      " (expected " << overflow << noboolalpha << ")";
    if (C.carry_out() == overflow)
      cout << " PASS overflow check";
    else {
      cout << " FAIL overflow check";
      assert(C.carry_out() == overflow);
    }
  }
  cout << endl;
}

int main(int argc, char* argv[])
{
  // Test Counter ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // constructor, with overflow check
  int init = 5;
  int mod = 8;
  Counter count1(init, mod, "count1");
  check(count1, init, false, true);

  int i = 0;
  // reset, no overflow check
  count1.reset();
  check(count1, i++, false, false);

  // count, with overflow check
  count1.count();
  check(count1, i++, false, true);

  // count one short of mod, with overflow check
  for (int j = i; j < mod; j++) {
    count1.count();
    check(count1, j, false, true);
  }

  // count once more to check count wrap to 0
  // overflow flag should now be true
  count1.count();
  check(count1, 0, true, true);

  // count once more to check overflow flag is cleared
  count1.count();
  check(count1, 1, false, true);

  return 0;
}
