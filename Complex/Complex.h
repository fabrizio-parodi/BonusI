#ifndef COMPLEX_H
#define COMPLEX_H

#include<TVector2.h>
#include<iostream>

class Complex: public TVector2{
public:
  Complex(double re, double im): TVector2(re,im) {};
  Complex(): TVector2(0,0) {};
  Complex(const TVector2& c):TVector2(c.X(),c.Y()){};

  // Complex - Complex operation
  Complex operator*(const Complex&);
  Complex operator/(const Complex&);

  // Conjugate
  Complex Conjugate() const { return Complex(fX, -fY); };

  // Access to real and imaginary part
  double  Re() const { return fX; };
  double  Im() const { return fY; };
  void    Re(double re) { fX = re; }; 
  void    Im(double im) { fY = im; };

  friend std::ostream& operator<<(std::ostream&, const Complex&);
  friend std::istream& operator>>(std::istream&, Complex &);

};

#endif
