#include "../Headers/cutellipsoid.h"

CutEllipsoid::CutEllipsoid (int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_){
  this -> xcenter = xcenter_;
  this -> ycenter = ycenter_;
  this -> zcenter = zcenter_;
  this -> rx = rx_;
  this -> ry = ry_;
  this -> rz = rz_;
}

void CutEllipsoid::draw(Sculptor &t){
  for(int x = xcenter - rx; x < xcenter + rx; x++){
    for(int y = ycenter - ry; x < ycenter + ry; y++){
      for(int z = zcenter - rz; x < zcenter + rz; z++){
        if ((((x-xcenter)*(x-xcenter)/rx*rx) + ((y-ycenter)*(y-ycenter)/ry*ry) + ((z-zcenter)*(z-zcenter)/rz*rz)) <= 1){
          t.cutVoxel(x,y,z);
        }
      }
    }
  }
}