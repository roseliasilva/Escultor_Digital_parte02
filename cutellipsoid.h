#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"

class CutEllipsoid:public FiguraGeometrica{
private:
  int xcenter, ycenter, zcenter, rx, ry, rz;
public:
  CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_);
  ~CutEllipsoid(){};
  
  void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
