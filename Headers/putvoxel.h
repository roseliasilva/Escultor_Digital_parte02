#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"

class PutVoxel:public FiguraGeometrica{
  int x, y, z;
public:
  PutVoxel(int x_,int y_, int z_, float r_, float g_, float b_, float a_);
  ~PutVoxel();

  void draw(Sculptor &t);
};

#endif // PUTVOXEL_H