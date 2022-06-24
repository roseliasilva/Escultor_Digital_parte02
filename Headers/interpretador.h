#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H

#include <vector>
#include "figurageometrica.h"
#include <string>

class Interpretador{
  int dimx, dimy, dimz;
  float r, g, b, a;
public:
  Interpretador();
  int getDimx();
  int getDimy();
  int getDimz();
  std::vector<FiguraGeometrica *> parse (std::string filename);
};


#endif //INTERPRETADOR_H