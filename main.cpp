#include "materiau.h"
#include "determinant.h"
#include <cmath>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  materiau gold(19300,79e9,0.4);
  determinant reduit(1.0245884585,0.01,gold.rho(),gold.young(),gold.poisson(),0,100);

  cout << reduit.besseln() << endl;

  // creation du materiau or
  ofstream fichier("out.csv", ios::out | ios::trunc);  // ouverture en écriture avec effacement du fichier ouvert
        if(fichier)
        {
                fichier << gold.vitesseTrans() << endl;
                fichier << gold.vitesseLongi() << endl;
                fichier << reduit.alpha() << endl;
                fichier << reduit.beta();
                fichier.close();
        }
        else
                cerr << "Impossible d'ouvrir le fichier !" << endl;
        return 0;
}
