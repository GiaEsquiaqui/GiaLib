#ifndef COMPLEJO_H_INCLUDED
#define COMPLEJO_H_INCLUDED
#include "operaciones_basicas.h"
#include <iostream>

using namespace std;

class Complejo {
  public: double x;
  public: double y;
};

istream& leer_complejo (istream&, Complejo& );
ostream& escribir_complejo (ostream&, Complejo&);
double norma(Complejo);
double parte_real(Complejo);
double parte_imaginaria(Complejo);
double conjugado(Complejo);
double suma_complejos(Complejo, Complejo);
double resta_complejos(Complejo, Complejo);
double producto_complejos(Complejo, Complejo);
double division_complejos(Complejo, Complejo);

#endif // COMPLEJO_H_INCLUDED
