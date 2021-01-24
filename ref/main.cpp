#include <iostream>

#include "vec3.h"

int main() {
  Vec3f v1(1, 0, 0);
  Vec3f v2(0, 1, 0);
  std::cout << cross(v1, v2) << std::endl;
  return 0;
}