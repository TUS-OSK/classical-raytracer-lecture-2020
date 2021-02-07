#ifndef _INTERSECT_INFO_H
#define _INTERSECT_INFO_H
#include "vec3.h"

struct IntersectInfo {
  float t;          // 交差位置までの距離
  Vec3f hitPos;     // 交差位置
  Vec3f hitNormal;  // 交差位置における法線
};

#endif