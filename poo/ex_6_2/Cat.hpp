#ifndef __CAT__
#define __CAT__
#include "Animal.hpp"
class Cat : public Animal {
public:
  Cat(string name);
  void sound() override;
  virtual ~Cat();
};

#endif
