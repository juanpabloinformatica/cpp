#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <vector>

int main() {
  Dog *d = new Dog("juan");
  Cat *c = new Cat("lau");
  std::vector<Animal *> animals;
  animals.push_back(d);
  animals.push_back(c);
  for (auto a : animals) {
    a->sound();
  }
  cout << "Before deleting pointers" << endl;
  cout << animals.size();
  for (auto a : animals) {
    delete a;
  }
  cout << "After deleting pointers" << endl;
  cout << animals.size();
  return 0;
}
