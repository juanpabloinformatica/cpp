#ifndef __FORM__
#define __FORM__
#include <iostream>
class Form {
public:
  Form();
  virtual double area() = 0;
  virtual ~Form();
};
#endif
