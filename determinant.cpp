#include <cmath>
#include <stdio.h>
#include <gsl/gsl_sf_bessel.h>
#include "determinant.h"

determinant::determinant(double omega, double k, double rho, double young, double poisson,double n, double rayon):
    m_omega(omega), m_k(k), m_rho(rho), m_young(young), m_poisson(poisson), m_n(n), m_rayon(rayon)
{
}

double determinant::besseln()
  {
    m_bessel=gsl_sf_bessel_Jn(m_n,m_rayon);
    return m_bessel;
  }

double determinant::alpha()
{
    m_materiau.setElas(m_rho,m_young,m_poisson);
    if ((pow(m_omega,2)/pow(m_materiau.vitesseLongi(),2)-pow(m_k,2))<0)
        m_alpha = sqrt(-(pow(m_omega,2)/pow(m_materiau.vitesseLongi(),2)-pow(m_k,2)));
    else
        m_alpha = sqrt((pow(m_omega,2)/pow(m_materiau.vitesseLongi(),2)-pow(m_k,2)));
    return m_alpha;
}

double determinant::beta()
{
    m_materiau.setElas(m_rho,m_young,m_poisson);
    if ((pow(m_omega,2)/pow(m_materiau.vitesseTrans(),2)-pow(m_k,2))<0)
        m_beta = sqrt(-(pow(m_omega,2)/pow(m_materiau.vitesseTrans(),2)-pow(m_k,2)));
    else
        m_beta = sqrt((pow(m_omega,2)/pow(m_materiau.vitesseTrans(),2)-pow(m_k,2)));
    return m_beta;
}
