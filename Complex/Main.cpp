
#include <iostream>
#include "Complex.h"

int main(){

  Complex a,b;
  std::cout << "Inserisci un numero complesso" << std::endl;
  std::cin >> a;
  std::cout << "Inserisci un altro numero complesso" << std::endl;
  std::cin >> b;

  Complex f = a+b;
  Complex e = a-b;
  Complex h = a*2;
  Complex g = a.Conjugate();
  std::cout << "Somma " << f << std::endl;
  std::cout << "Differenza " << e << std::endl;
  std::cout << "x2 " << h << std::endl;
  std::cout << "Coniugato di a " << g << std::endl;
  std::cout << "Prodotto a*b " << a*b << std::endl;
  std::cout << "Divisione a/b " << a/b << std::endl;

  return 0;

}
