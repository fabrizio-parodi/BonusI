#ifndef COMPLEX_H
#define COMPLEX_H

#include<TVector2.h>
#include<iostream>

class Complex: public TVector2{
public:
  Complex(double re=0, double im=0): TVector2(re,im) {};

  Complex(const TVector2& c):TVector2(c.X(),c.Y()){};
  // Complex - Complex operation
  Complex operator*(double);
  Complex operator*(const Complex&);
  Complex operator/(const Complex&);
  
  Complex Conjugate() const { return Complex(fX, -fY); };
  double  Re() const { return fX; };
  double  Im() const { return fY; };
  void    Re(double re) { fX = re; }; 
  void    Im(double im) { fY = im; };

  friend std::ostream& operator<<(std::ostream&, const Complex&);
  friend std::istream& operator>>(std::istream&, Complex &);

};

#endif
