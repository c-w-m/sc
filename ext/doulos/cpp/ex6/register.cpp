#include "register.h"
#include <string>

using std::string;

Register::Register(int init, const string& name)
{
  value = init;
  idstr = name;
}

int Register::read() const { return value; }

void Register::write(int val) { value = val; }

void Register::reset() { value = 0; }

const string Register::id() const { return idstr; }
