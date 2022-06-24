#include "cutvoxel.h"

CutVoxel::CutVoxel (int x_,int y_, int z_){
  this -> x = x_;
  this -> y = y_;
  this -> z = x_;
}

void CutVoxel::draw (Sculptor &t){
  t.cutVoxel(x, y, z);
}