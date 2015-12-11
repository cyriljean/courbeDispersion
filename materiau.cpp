#include <cmath>
#include "materiau.h"

materiau::materiau(double rho, double young, double poisson):
  m_rho(rho),m_young(young),m_poisson(poisson)
{
}
/* Constructeur par défaut avec les propriétés du cuivre*/
materiau::materiau()
{
  m_rho = 8700;
  m_young = 110e9;
  m_poisson = 0.35;
}

/*Méthode de calcul de la vitesse du son longitudinale*/
double materiau::vitesseLongi()
  {
    m_vl = sqrt(m_young*(1-m_poisson)/(m_rho*(1+m_poisson)*(1-2*m_poisson)));
    return m_vl;
  }

/*Méthode de calcul de la vitesse du son transverse*/
double materiau::vitesseTrans()
  {
    m_vt = sqrt(m_young/(m_rho*2*(1+m_poisson)));
    return m_vt;
  }

/*Modification des propriétés élastiques des matériaux*/
void materiau::setElas(double Rho, double Young, double Poisson)
{
    m_rho = Rho;
    m_young = Young;
    m_poisson = Poisson;
}

/*Affichage de la masse volumique du matériau*/
double materiau::rho()
{
    return m_rho;
}

/*Affichage du module de Young du matériau*/
double materiau::young()
{
    return m_young;
}

/*Affichage du coefficient de Poisson du matériau*/
double materiau::poisson()
{
    return m_poisson;
}
