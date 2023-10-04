
#include"Complex.h"
#include<cmath>

// operators Complex - Complex
Complex Complex::operator*(double par){
  Complex c(par*fX,par*fY);
  return c;
}
Complex Complex::operator*(const Complex& c){
  return Complex( fX*c.fX - fY*c.fY, fX*c.fY + fY*c.fX );
}
Complex Complex::operator/(const Complex& c){
  return ((*this)*c.Conjugate())*(1/c.Mod2());
}

// streamers
std::ostream& operator<<(std::ostream& out, const Complex& c){
    out << c.fX << ((c.fY<0)?" - ":" + ") << std::sqrt(c.fY*c.fY) << "j";
    return out;
}
std::istream& operator>>(std::istream& in, Complex& c){
  double re, im;
  in >> c.fX >> c.fY;
  return in;
}
