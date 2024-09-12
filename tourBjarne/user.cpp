#include "Vector.h" // get Vector’s interface
#include <cmath> // get the the standard-librar y math function interface including sqrt()
#include <iostream>
using namespace std;
using namespace std; // make std members visible (§3.3)
double sqrt_sum(Vector &v) {
  double sum = 0;
  for (int i = 0; i != v.size(); ++i)
    sum += sqrt(v[i]); // sum of square roots
  return sum;
}
int main() {
  Vector v = Vector(10);
  for (int i = 0; i < v.size(); i++) {
      v[i]=i+1;
  }
  double result = sqrt_sum(v);
  cout << result;
}
