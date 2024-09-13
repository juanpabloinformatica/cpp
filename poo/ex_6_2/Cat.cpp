#include "Cat.hpp"

Cat::Cat(string name) : Animal(name) { this->name = name; }
Cat::~Cat() {}
void Cat ::sound() { cout << "Miau Miau" << endl; }
