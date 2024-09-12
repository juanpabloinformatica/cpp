#include "Voiture.hpp"
#include <iostream>
#include <vector>
using namespace std;
int main() {
  Voiture voiture1("renault", "1995", 2000);
  Voiture voiture2("mika", "1999", 2001);
  Voiture voiture3("tere", "1998", 2002);
  Voiture voiture4("core", "1997", 2003);
  std::vector<Voiture> voitures;
  voitures.push_back(voiture1);
  voitures.push_back(voiture2);
  voitures.push_back(voiture3);
  voitures.push_back(voiture4);
  for (auto v : voitures) {
    cout << v.show();
    cout << "\n";
  }
}
