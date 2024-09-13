#ifndef __ANIMAL__
#define __ANIMAL__
#include <iostream>
using namespace std;
class Animal {
protected:
  string name;

public:
  Animal(string name);
  virtual void sound() = 0;
  virtual ~Animal();
};
#endif
