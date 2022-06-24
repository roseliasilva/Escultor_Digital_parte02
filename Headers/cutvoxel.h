#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"

class CutVoxel:public FiguraGeometrica{
  int x, y, z;
public:
  CutVoxel(int x_,int y_, int z_);
  ~CutVoxel(){};

  void draw(Sculptor &t);
};

#endif // CUTVOXEL_H