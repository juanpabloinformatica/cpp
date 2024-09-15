#include <iostream>
class Test {
public:
  int size;
  int *array;
  Test(int size) : size{size}, array{new int[size]} { fillArray(); };
  void fillArray() {
    for (int i = 0; i < this->size; i++) {
      std::cout << i << "\n";
      this->array[i] = i + 1;
    }
  }
  void showArray() {
    std::cout << "\n";
    for (int i = 0; i < this->size; i++) {
      std::cout << this->array[i];
      std::cout << "\n";
    }
  }
  Test(Test &&otherTest) {
    std::cout << "i enter here";
    this->size = otherTest.size;
    otherTest.size = 0;
    this->array = otherTest.array;
    otherTest.array = nullptr;
  }
};
int main() {
  Test *test1 = new Test(10);
  Test *test2 = new Test(std::move(*test1));
  test1->showArray();
  test2->showArray();
  test1->showArray();

  return 0;
}
