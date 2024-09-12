#include "CompteBancaire.hpp"
#include <iostream>
using namespace std;

double CompteBancaire::getMoney() { return this->money; }
void CompteBancaire::setMoney(double amount) { this->money += amount; }
string CompteBancaire::show() {
  return "current money: " + to_string(this->money);
};
CompteBancaire::CompteBancaire(double amount) { this->money = amount; }
