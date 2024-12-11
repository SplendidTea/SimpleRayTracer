#include "vec3.hh"

#include <iostream>

#pragma once

void write_colour(std::ostream& out, const vec3& pixel_colour){
  auto r = pixel_colour.r();
  auto g = pixel_colour.g();
  auto b = pixel_colour.b();

  int rByte = int(255.999 * r);
  int gByte = int(255.999 * g);
  int bByte = int(255.999 * b);

  out << rByte << ' ' << gByte << ' ' << bByte << std::endl;
}
