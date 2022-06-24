#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"

class PutSphere:public FiguraGeometrica{
private:
  int xcenter, ycenter, zcenter, radius;
  float r, g, b, a;
public:
  PutSphere(int xc, int yc, int zc, int radius_, float r_, float g_, float b_, float a_);
  ~PutSphere();
  
  void draw(Sculptor &t);
};

#endif // PUTSPHERE_H