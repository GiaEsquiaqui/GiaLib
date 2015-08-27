#include "operaciones_basicas.h"
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

istream& leer_real(istream& is, double& a){
  cout << "Digite el valor: ";
  is >> a;
  return is;
};

istream& leer_entero(istream& is, int& a){
  cout << "Digite el valor: ";
  is >> a;
  return is;
};

ostream& escribir_char(char a, ostream& os){
  os << a;
  return os;
};

ostream& escribir_real(double a, ostream& os){
  os << a;
  return os;
};

ostream& escribir_entero(int a, ostream& os){
  os << a;
  return os;

};

int producto_entero(int a, int b){
  return a*b;
};

int producto_entero3(int a, int b, int c){
  return a*b*c;
};

int suma_entero(int a, int b){
  return a+b;
};

int suma_entero3(int a, int b, int c){
  return a+b+c;
};

int division_entero(int a, int b){
  return a/b;
};
double producto_real(double a, double b){
  return a*b;
};

double producto_real3(double a, double b, double c){
  return a*b*c;
};

double suma_real(double a, double b){
  return a+b;
};

double suma_real3(double a, double b, double c){
  return a+b+c;
};

double division_real(double a, double b){
  return a/b;
};

double division_mixta(double a, int b){
  return a/b;
};

double producto_mixto(double a, int b){
  return a*b;
};

double cent_a_inch(double a, double b){
  return sqrt(a*a+b*b)/2.54;
};
