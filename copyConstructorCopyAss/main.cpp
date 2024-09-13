#include <iostream>
using namespace std;

// i will create a class that has a vector
// so i will try to do a copy constructor for avoiding copy the same vector of
// ech instantiated objectl
//
class Example {
public:
  int *p;
  unsigned int size;
  Example(int size) {
    this->size = size;
    this->p = new int[size];
    for (int i = 0; i < size; i++) {
      this->p[i] = i + 1;
    }
  };
  // copy constructor
  Example(Example &example) {
    this->p = new int[example.size];
    this->size = example.size;
    for (int i = 0; i < example.size; i++) {
      this->p[i] = example.p[i];
    }
  }
  Example &operator=(Example &example) {
    cout << "i enter here";
    delete this->p;
    this->p = new int[example.size];
    this->size = example.size;
    for (int i = 0; i < example.size; i++) {
      this->p[i] = example.p[i];
    }
    return *this;
  }

  void showArray() {
    cout << "\n";
    for (int i = 0; i < this->size; i++) {
      cout << this->p[i] << "\n";
    }
  }
};

int main() {
  Example *e = new Example(10);
  cout << "before changing constructor";
  e->showArray();
  Example *ee = e;
  ee->p[0] = 8;
  cout << "After changing constructor";
  e->showArray();
  Example *eee = new Example(10);
  eee = ee;
  cout << "before changing assignment operator";
  ee->showArray();
  eee->p[1] = 8;
  cout << "before changing assignment operator";
  ee->showArray();
  // it changed the array element becasue if pointing to the same place so for
  // fixxing that
  //

  // this is working in the case is not defined before;

  return 0;
}
