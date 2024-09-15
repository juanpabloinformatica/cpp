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
  Example(const Example &example) {
    cout << "Copy constructor called";
    cout << "\n";
    this->p = new int[example.size];
    this->size = example.size;
    for (int i = 0; i < example.size; i++) {
      this->p[i] = example.p[i];
    }
  }
  Example &operator=(Example &example) {
    cout << "I enter in =operator";
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
    cout << "\n";
  }
};

int main() {
  // Example e =  Example(10);
  // cout << "example e" << "\n";
  // e.showArray();
  // // e->showArray();
  // Example ee = e;
  // cout << "example ee" << "\n";
  // ee.showArray();
  // for (int i = 0; i < ee.size; i++) {
  //   ee.p[i] = ee.p[i] * -1;
  // }
  // cout << "example e" << "\n";
  // e.showArray();
  // cout << "example ee after changing it" << "\n";
  // ee.showArray();

  // Example *e = new Example(10);
  // cout << "before changing constructor";
  // e->showArray();
  // Example *ee = e;
  // ee->p[0] = 8;
  // cout << "After changing constructor";
  // e->showArray();
  // Example *eee = new Example(30);
  // eee = ee;
  // cout << "before changing assignment operator";
  // ee->showArray();
  // eee->p[1] = 8;
  // cout << "before changing assignment operator";
  // ee->showArray();
  // it changed the array element becasue if pointing to the same place so for
  // fixxing that
  //

  // this is working in the case is not defined before;
  // what is happening is that new is returning a pointer to the object
  // so before at doing this
  // Example *e = new Example(5)
  // Example *ee = e;
  // at doing that it was not working because i am passing is a pointer to the
  // object but not the object itself
  Example *e = new Example(10);
  cout << "example e" << "\n";
  e->showArray();
  // e->showArray();
  Example *ee = new Example(*e);
  cout << "example ee" << "\n";
  ee->showArray();
  for (int i = 0; i < ee->size; i++) {
    ee->p[i] = ee->p[i] * -1;
  }
  cout << "example e" << "\n";
  e->showArray();
  cout << "example ee after changing it" << "\n";
  ee->showArray();
  for (int i = 0; i < ee->size; i++) {
    ee->p[i] = ee->p[i] * -1;
  }
  Example *eee = new Example(30);
  eee->showArray();
  *eee = *ee;
  cout << "\n\nChecking assigment operator, how eee changed and it should be "
          "similar to ee";
  eee->showArray();
  cout << "ee how is ee \n";
  ee->showArray();

  // cout <<

  return 0;
}
