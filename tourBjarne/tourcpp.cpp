#include <cmath>
#include <iostream>
using namespace std;
typedef struct Vector Vector;
struct Vector {
  int sz;
  double *ptr;
};
// reference approach
void init_vector(Vector &v, int sz) {
  v.sz = sz;
  v.ptr = new double[sz];
}
// pointer approach
void init_vector(Vector *v, int sz) {
  v->sz = sz;
  v->ptr = new double[sz];
}
double sqrtT(int);
int main() {
  // Vector *v = new Vector();
  Vector v;
  init_vector(v, 10);
  for (int i = 0; i < 10; i++) {
    v.ptr[i] = i;
  }
  for (int i = 0; i < 10; i++) {
    cout << v.ptr[i];
  }
  double result = sqrtT(10);
  cout << result;


  // for (int i = 0; i < 10; i++) {
  //   v->ptr[i] = i;
  // }
  // for(int i = 0 ; i < 10 ; i++){
  //     cout << v->ptr[i];
  // }
}
double sqrtT(int a) { return sqrt(a); }
