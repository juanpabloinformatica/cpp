#ifndef __CIRCLE__
#define __CIRCLE__
#include "Form.hpp"
class Circle : public Form {
public:
  double radius;
  Circle(double radius) : radius{radius} {};
  double area() override;
  // ~Circle();
};
#endif
