#include <iostream>
#include "./Headers/interpretador.h"
#include <vector>

int main(){
  Sculptor *sculptor;
  Interpretador interpretador;
  std::vector<FiguraGeometrica*> figs;

  figs = interpretador.parse("teste.txt");
  sculptor = new Sculptor(interpretador.getDimx(), interpretador.getDimy(), interpretador.getDimz());
  
  for(int i=0; i<figs.size(); i++){
    figs[i] -> draw(*sculptor);
  }

  sculptor -> writeOFF("sculptor.off");

  for(size_t i=0; i<figs.size(); i++){
    delete figs[i];
  }
  delete sculptor;
  
  return 0;
}