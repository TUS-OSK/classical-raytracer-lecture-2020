#include "image.h"
#include "intersect-info.h"
#include "pinhole-camera.h"

int main() {
  Image img(512, 512);
  const unsigned int width = img.getWidth();
  const unsigned int height = img.getHeight();

  for (int j = 0; j < height; ++j) {
    for (int i = 0; i < width; ++i) {
      img.setPixel(i, j,
                   Vec3f(static_cast<float>(i) / width,
                         static_cast<float>(j) / height, 1.0f));
    }
  }
  img.writePPM("output.ppm");

  return 0;
}