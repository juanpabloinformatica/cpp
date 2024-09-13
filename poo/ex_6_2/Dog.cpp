#include "Dog.hpp"
#include <iostream>
using namespace std;

Dog ::Dog(string name) : Animal(name) { this->name = name; }
Dog::~Dog() {}
void Dog::sound() { cout << "wow wow" << endl; }
