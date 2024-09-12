#ifndef __COMPTE_BANCAIRE__
#define __COMPTE_BANCAIRE__
#include <iostream>
class CompteBancaire {
private:
  double money;

public:
  CompteBancaire(double);
  double getMoney(void);
  void setMoney(double);
  std::string show(void);
};
#endif
