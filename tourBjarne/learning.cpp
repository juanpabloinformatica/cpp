#include <cstdio>
#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double diff(double a, double b) { return a - b; }
double divt(double a, double b) { return a / b; }
double mult(double a, double b) { return a * b; }

int main() {

  cout << "hello world\n";
  int option = 1;
  int a, b, c;
  while (option == 1) {
    cout << "Put first value:";
    cin >> a;
    cout << "Put second value:";
    cin >> b;
    cout << "operation\n1-> add\n2->diff\n3->div\n4->mult\n";
    cin >> c;
    if (c == 1) {
      cout << "result: " << add(a, b) << "\n";
    } else if (c == 2) {
      cout << "result: " << diff(a, b) << "\n";
    } else if (c == 3) {
      cout << "result: " << divt(a, b) << "\n";
    } else {
      cout << "result: " << mult(a, b) << "\n";
    }
  }
}
