#ifndef __RECTANGLE__
#define __RECTANGLE__
#include "Form.hpp"
#include <iostream>
class Rectangle : public Form {
public:
  double length, width;
  Rectangle(double length, double width) : length{length}, width{width} {};
  double area() override;
  // ~Rectangle();
};
#endif
