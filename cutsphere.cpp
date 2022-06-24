#include "cutsphere.h"

CutSphere::CutSphere(int xc, int yc, int zc, int radius_){
  this -> xcenter = xc;
  this -> ycenter = yc;
  this -> zcenter = zc;
  this -> radius = radius_;
}

  
void CutSphere::draw(Sculptor &t){
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