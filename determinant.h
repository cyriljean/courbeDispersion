#ifndef DETERMINANT_H_INCLUDED
#define DETERMINANT_H_INCLUDED

#include "materiau.h"

class determinant
{
 public:
  determinant(double omega, double k,double rho, double young, double poisson, double n, double rayon);
  double alpha();
  double beta();
  double besseln();

 private:
  double m_omega;
  double m_k;
  double m_vl;
  double m_vt;
  double m_beta;
  double m_alpha;
  double m_rho;
  double m_young;
  double m_poisson;
  double m_rayon;
  double m_n;
  double m_bessel;
  materiau m_materiau;
};


#endif // DETERMINANT_H_INCLUDED
