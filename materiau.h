#ifndef DEF_MATERIAU
#define DEF_MATERIAU


class materiau
{
 public:
  materiau(); //Constructeur
  materiau(double rho, double young, double poisson);
  double vitesseLongi();
  double vitesseTrans();
  double rho();
  double young();
  double poisson();
  void setElas(double Rho, double Young, double Poisson);

 private:
  double m_vl;
  double m_vt;
  double m_rho;
  double m_young;
  double m_poisson;
};

#endif
