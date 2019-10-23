#include <iostream>

using std::cout;
using std::endl;

void foo() {
  int x = 8;
  cout << "Foo: " << x << endl;
  cout << "Foo address: " << &x << endl;
}

int main() {
  int num = 7;

  cout << "Num: " << num << endl;
  cout << "Num address: " << &num << endl;

  foo();

  return 0;
};
