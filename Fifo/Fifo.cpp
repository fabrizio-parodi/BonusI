#include "Fifo.h"
#include <iostream>

double Fifo::operator[](unsigned int i){
  double val;
  int    last_n = m_n-1;
  if (last_n<size()){
    val = at(i);
  } else {
    val = at((last_n+1+i)%(size()));
  }
  return val;
}

void Fifo::add(double val){
  this->at(m_n%size()) = val;
  m_n++;
}
