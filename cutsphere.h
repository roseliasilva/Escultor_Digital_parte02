#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"

class CutSphere:public FiguraGeometrica{
private:
  int xcenter, ycenter, zcenter, radius;
public:
  CutSphere(int xc, int yc, int zc, int radius_);
  ~CutSphere(){};
  
  void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
