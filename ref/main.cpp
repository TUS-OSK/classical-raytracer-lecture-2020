#include "image.h"
#include "pinhole-camera.h"

int main() {
  Image img(512, 512);
  const unsigned int width = img.getWidth();
  const unsigned int height = img.getHeight();

  PinholeCamera camera(Vec3f(0, 0, 0), Vec3f(0, 0, -1));

  for (int j = 0; j < height; ++j) {
    for (int i = 0; i < width; ++i) {
      const float u = (2.0f * i - width) / height;
      const float v = (2.0f * j - height) / height;
      const Ray ray = camera.sampleRay(u, v);
      img.setPixel(i, j, 0.5f * (ray.direction + Vec3f(1.0f)));
    }
  }
  img.writePPM("output.ppm");

  return 0;
}