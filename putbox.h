#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"

class PutBox:public FiguraGeometrica{
  int x0, x1, y0, y1, z0, z1;
  float r, g, b, a;
public:
  PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_, float a_);
  ~PutBox();

  void draw(Sculptor &t);
};

#endif // PUTBOX_H
