#ifndef __DOG__
#define __DOG__
#include "Animal.hpp"
class Dog : public Animal {
public:
  Dog(string name);
  void sound() override;
  ~Dog();
};
#endif
