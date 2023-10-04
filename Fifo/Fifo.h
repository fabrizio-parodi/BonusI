#ifndef _FIFO
#define _FIFO

#include <vector>

class Fifo: public std::vector<double>{
  public:
    Fifo(int n=0):std::vector<double>(n),m_n(0),m_ind(0){;}
    double operator[](unsigned int i);
    void add(double x);
  private:
    int m_n;
    int m_ind;
};

#endif
