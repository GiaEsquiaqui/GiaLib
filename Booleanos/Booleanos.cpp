#include "operaciones_basicas.h"
#include "Complejo.h"
#include <iostream>

using namespace std;

istream& leer_complejo (istream& is, Complejo& z){
  cout << "Ingrese la parte real";
  is >> z.x;
  cout << "Ingrese la parte imaginaria";
  is >> z.y;
  return is;
};

ostream& escribir_complejo (ostream& os, Complejo& z){
  os << "La norma del complejo es: " << norma(z);
  return os;
};

double norma(Complejo z){
  return z.x*z.x + z.y*z.y;
};

double parte_real(Complejo z){
  cout << "La parte real es " << z.x << "." << endl;
  return 0;
};

double parte_imaginaria(Complejo z){
  cout << "La parte imaginaria es " << z.y << "." << endl;
  return 0;
};

double conjugado(Complejo z){
  cout << "El conjugado de " << z.x << " + " << z.y << "i es " << z.x << " - " << z.y << "i." << endl;
  return 0;
};

double suma_complejos(Complejo z, Complejo w){
  cout << z.x+w.x << " + " << z.y+w.y << "i";
  return 0;
};

double resta_complejos(Complejo z, Complejo w){
  cout << z.x-w.x << " + " << z.y-w.y << "i";
  return 0;
};

double producto_complejos(Complejo z, Complejo w){
  cout << (z.x*w.x)-(z.y*w.y) << " + " << (z.x*w.y)-(z.y*w.x) << "i";
  return 0;
};
double division_complejos(Complejo z, Complejo w){
  cout << ((z.x*w.x)+(z.y*w.y)) << "/" << ((w.x*w.x)+(w.y*w.y)) << " + " << ((z.y*w.x)-(z.x*w.y))<< "/" <<((w.x*w.x)+(w.y*w.y)) << "i";
  return 0;
};
