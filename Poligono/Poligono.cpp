#include "Poligono.h"
#include "TVector2.h"
#include <cmath>
#include "Vettore.h"


PoligonoRegolare::PoligonoRegolare(double l, double n){
  m_l = l;
  m_n = n;
  double raggio=(l/2)/sin(M_PI/n);
  for (int i=0;i<n;i++){
    double x = raggio*cos(2*M_PI/n*i);
    double y = raggio*sin(2*M_PI/n*i);
    m_ver.push_back(TVector2(x,y));
  }
}

double PoligonoRegolare::Perimetro(){
  return m_l*m_n;
}

double PoligonoRegolare::Area(){
  return m_n*m_l/2*m_l/2*1/tan(M_PI/m_n);
}

double PoligonoIrregolare::Perimetro(){
  double sum;
  for (int unsigned i=0; i<m_ver.size()-1; i++) {   
    double dist= (m_ver[i]-m_ver[i+1]).Mod(); 
    sum = sum + dist;
  }
  double distn = (m_ver[0]-m_ver[m_ver.size()-1]).Mod();
  double sumtot = sum+distn;
  return sumtot;
}

double PoligonoIrregolare::Area(){
  double area;
  for (int unsigned i=0; i<m_ver.size(); i++) {
    int i1 = i+1;
    if (i1==m_ver.size())
	i1 = 0;
    area += m_ver[i].X()*m_ver[i1].Y()-m_ver[i1].X()*m_ver[i].Y();
  }
  area = 0.5*abs(area);
  return area;
}


std::ostream& operator<<(std::ostream& os, const Poligono& b){
  for (auto p: b.m_ver) 
    os << "(" << p.X() << "," << p.Y() << ")  ";
  return os;
}
