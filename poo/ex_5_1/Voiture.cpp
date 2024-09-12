#include "Voiture.hpp"
#include <iostream>
using namespace std;
string Voiture::show() {
  return "band: " + this->band + "\nmodel: " + this->model +
         "\nyear: " + to_string(this->year);
};
Voiture::Voiture(std::string band, std::string model, int year) {
  this->band = band;
  this->model = model;
  this->year = year;
};
