#include "../Headers/putsphere.h"

PutSphere::PutSphere(int xc, int yc, int zc, int radius_, float r_, float g_, float b_, float a_){
  this -> xcenter = xc;
  this -> ycenter = yc;
  this -> zcenter = zc;
  this -> radius = radius_;
  this -> r = r_;
  this -> g = g_;
  this -> b = b_;
  this -> a = a_;
}

PutSphere::~PutSphere(){
  
}
  
void PutSphere::draw(Sculptor &t){
  for(int x = xcenter - radius; x < xcenter + radius; x++){
    for(int y = ycenter - radius; y < ycenter + radius; y++){
      for(int z = zcenter - radius; z < zcenter + radius; z++){
        if( ((x-xcenter)/2.0) * ((x-xcenter)/2.0 ) / ((radius/2.0)*(radius/2.0)) + ((y-ycenter)/2.0) * ((y-ycenter)/2.0) / ((radius/2.0)*(radius/2.0)) + ((z-zcenter)/2.0) * ((z-zcenter)/2.0 ) / ((radius/2.0)*(radius/2.0))< 1.0){
          t.cutVoxel(x, y, z);
        }
      }
    }
  }
}