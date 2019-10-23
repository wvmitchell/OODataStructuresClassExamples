#include <iostream>

using std::cout;
using std::endl;

int main() {
  int num = 7;
  cout << "num: " << num << endl;
  cout << "&num: " << &num << endl;

  int *p = &num;
  cout << "p: " << p << endl;
  cout << "&p: " << &p << endl;
  cout << "*p: " << *p << endl;

  *p = 42;
  cout << "changed *p to 42" << endl;
  cout << "num: " << num << endl;
  cout << "*p: " << *p << endl;
  return 0;
};
