#include <iostream>

#include "image.h"
#include "ray.h"

int main() {
  Image img(512, 512);

  for (int j = 0; j < img.getWidth(); ++j) {
    for (int i = 0; i < img.getHeight(); ++i) {
      img.setPixel(i, j,
                   Vec3f(static_cast<float>(i) / img.getWidth(),
                         static_cast<float>(j) / img.getHeight(), 1.0f));
    }
  }
  img.writePPM("output.ppm");

  return 0;
}