#include "Poligono.h"
#include <iostream>

using namespace std;

int main(){

  PoligonoRegolare qua(2,4);
  std::cout << qua.Area() << std::endl;
  std::cout << qua.Perimetro() << std::endl;
  std::cout << qua << std::endl;

  vector<TVector2> vx;
  vx.push_back(TVector2(0.0,0.0));
  vx.push_back(TVector2(1.0,0.0));
  vx.push_back(TVector2(1.0,0.5));
  vx.push_back(TVector2(0.5,0.5));
  vx.push_back(TVector2(0.5,1.0));
  vx.push_back(TVector2(0.0,1.0));
  PoligonoIrregolare sca(vx);
  std::cout << sca.Perimetro() << std::endl;
  std::cout << sca.Area() << std::endl;
  
}
