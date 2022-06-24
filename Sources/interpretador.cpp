#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>

#include "../Headers/putvoxel.h"
#include "../Headers/cutvoxel.h"
#include "../Headers/putbox.h"
#include "../Headers/cutbox.h"
#include "../Headers/putsphere.h"
#include "../Headers/cutsphere.h"
#include "../Headers/putellipsoid.h"
#include "../Headers/cutellipsoid.h"
#include "../Headers/interpretador.h"

Interpretador::Interpretador(){
  dimx = dimy = dimz = 0;
  r = g = b = a = 0.0;
}

int Interpretador::getDimx(){
  return dimx;
}
int Interpretador::getDimy(){
  return dimy;
}
int Interpretador::getDimz(){
  return dimz;
}

std::vector<FiguraGeometrica*> Interpretador::parse(std::string filename){
  std::vector<FiguraGeometrica*> figs;
  std::ifstream fin;
  std::stringstream ss;
  std::string s, token;
  
  fin.open(filename.c_str());
  
  if(!fin.is_open()){
    std::cout << "O arquivo não abriu :C" << std::endl;
    exit(1);
  }
  
  while(fin.good()){
    // fin >> s
    std::getline(fin, s);
    // lança o string s no fluxo ss
    ss.clear();
    ss.str(s);
    ss >> token;
      
      // realiza o parsing dos tokens
      if (ss.good()){
        // dimensões da leta
        if (token.compare("dim")==0){
          ss >> dimx >> dimy >> dimz;
        }
        // usuario define trush
        else if (token.compare ("putvoxel")==0){
          int x0, y0, z0;
          ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
          figs.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
        }
        else if (token.compare ("putbox")==0){
          int x0, y0, z0, x1, y1, z1;
          ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
          figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
        }
        else if (token.compare ("putsphere")==0){
          int x0, y0, z0, rr;
          ss >> x0 >> y0 >> z0 >> rr >> r >> g >> b >> a;
          figs.push_back(new PutSphere(x0, y0, z0, rr, r, g, b, a));
        }
        else if (token.compare ("putellipsoid")==0){
          int xcenter, ycenter, zcenter, rx, ry, rz;
          ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
          figs.push_back(new PutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a));
        }
        else if (token.compare ("cutvoxel")==0){
          int x0, y0, z0;
          ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
          figs.push_back(new CutVoxel(x0, y0, z0));
        }
        else if (token.compare ("cutbox")==0){
          int x0, y0, z0, x1, y1, z1;
          ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
          figs.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
        }
        else if (token.compare ("cutsphere")==0){
          int x0, y0, z0, rr;
          ss >> x0 >> y0 >> z0 >> rr >> r >> g >> b >> a;
          figs.push_back(new CutSphere(x0, y0, z0, rr));
        }
        else if (token.compare ("cutellipsoid")==0){
          int xcenter, ycenter, zcenter, rx, ry, rz;
          ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
          figs.push_back(new CutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
        }
      }
  }
  return figs;
}