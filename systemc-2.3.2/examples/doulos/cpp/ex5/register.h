#ifndef REGISTER_H
#define REGISTER_H

#include <string>
using std::string;

class Register
{
private:
  int value;
  string idstr;

public:
  Register(int init, const string & name);
  int  read() const;
  void write(int val);
  void reset();
  const string id() const;
};

#endif
