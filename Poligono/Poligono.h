#ifndef _POLIGONO
#define _POLIGONO


#include "TVector2.h"
#include <ostream>
#include <vector>


class Poligono{
public:
  Poligono( std::vector<TVector2> ver = std::vector<TVector2>(0)) : m_ver(ver) {} 
  friend std::ostream& operator<<(std::ostream& os, const Poligono& b);
  virtual double Perimetro() = 0;
  virtual double Area() = 0;   
protected:
 std::vector <TVector2> m_ver;   
};

std::ostream& operator<<(std::ostream& os, const Poligono& b);

class PoligonoIrregolare: public Poligono{
public:
  using  Poligono::Poligono;
  double Perimetro();
  double Area();
};


class PoligonoRegolare: public Poligono{
public:
  PoligonoRegolare(double l, double n);
  double Perimetro();
  double Area();
private:
  double m_l;
  double m_n;
};

#endif
