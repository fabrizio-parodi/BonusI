#include "Fifo.h"
#include <iostream>

int main(){
  Fifo f(10);
  for (int i=1;i<40;i++){
    f.add(i);
    for (int j=0;j<f.size();j++){
      std::cout << f[j] << "\t ";
    }
    std::cout << std::endl;
  }
  return 0;
}
