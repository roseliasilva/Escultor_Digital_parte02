#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"

class PutEllipsoid:public FiguraGeometrica{
private:
  int xcenter, ycenter, zcenter, rx, ry, rz;
  float r, g, b, a;
public:
  PutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_, int r_, int g_, int b_, int a_);
  ~PutEllipsoid();
  
  void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
