#include "../Headers/putellipsoid.h"

PutEllipsoid::PutEllipsoid (int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_, int r_, int g_, int b_, int a_){
  this -> xcenter = xcenter_, this -> ycenter = ycenter_, this -> zcenter = zcenter_;
  this -> rx = rx_, this -> ry = ry_, this -> rz = rz_;
  this -> r = r_, this -> g = g_, this -> b = b_, this -> a = a_;
}

PutEllipsoid::~PutEllipsoid(){
  
}

void PutEllipsoid::draw(Sculptor &t){
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