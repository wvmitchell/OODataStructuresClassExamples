#include "cube.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  uiuc::Cube c;

  c.setLength(2.4);
  double volume = c.getVolume();
  double surfaceArea = c.getSurfaceArea();

  cout << "Volume: " << volume << endl;
  cout << "Surface Area: " << surfaceArea << endl;

  return 0;
}
