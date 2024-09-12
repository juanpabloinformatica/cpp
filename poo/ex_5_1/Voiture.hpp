#ifndef __VOITURE
#define __VOITURE
#include <iostream>
class Voiture {
public:
  std::string band;
  std::string model;
  int year;
  std::string show(void);
  Voiture(std::string band, std::string model, int year);
};

#endif
