#include "Circle.hpp"
#include <math.h>
// Circle::Circle(double radius) { this->radius = radius; }
double Circle::area() { return 2 * M_PI * this->radius * this->radius; }
// Circle::~Circle(){};
