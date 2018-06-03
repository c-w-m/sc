#ifndef REGISTER_H
#define REGISTER_H

#include <string>
using std::string;

template <typename T>
class Register
{
private:
  T value;
  string idstr;

public:
  Register(T init, const string & name);
  T  read() const;
  void write(T val);
  void reset();
  const string id() const;
};

// Template implementation ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
using namespace std;

template <typename T>
Register<T>::Register(T init, const string& name)
{
  value = init;
  idstr = name;
}

template <typename T>
T Register<T>::read() const { return value; }

template <typename T>
void Register<T>::write(T val) { value = val; }

template <typename T>
void Register<T>::reset() { value = 0; }

template <typename T>
const string Register<T>::id() const { return idstr; }

#endif
