#include "CompteBancaire.hpp"
#include <iostream>
using namespace std;
int main() {
  CompteBancaire cb = CompteBancaire(100.0f);
  cout << "\n";
  cout << cb.show();
  cb.setMoney(200.0f);
  cout << cb.show();
  cout << "\n";
}
