#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>
#include <vector>
using namespace std;
int main() {
  Form *rr;
  Form *cc;
  Rectangle *r = new Rectangle(10, 10);
  rr = r;
  Circle *c = new Circle(5);
  cc = c;
  std::vector<Form *> forms;
  forms.push_back(rr);
  forms.push_back(cc);
  for (auto f : forms) {
    cout << "\n";
    cout << f->area();
  }
}
