#ifndef OPERACIONES_BASICAS_H_INCLUDED
#define OPERACIONES_BASICAS_H_INCLUDED
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

istream& leer_real(istream&, double&);
istream& leer_entero(istream&, int&);
ostream& escribir_char(char, ostream&);
ostream& escribir_real(double, ostream&);
ostream& escribir_entero(int, ostream&);
int producto_entero(int, int);
int producto_entero3(int, int, int);
int suma_entero(int, int);
int suma_entero3(int, int, int);
int division_entero(int, int);
double producto_real(double, double);
double producto_real3(double, double, double);
double suma_real(double, double);
double suma_real3(double, double, double);
double division_real(double, double);
double division_mixta(double, int);
double producto_mixto(double, int);
double cent_a_inch(double, double);

#endif // OPERACIONES_BASICAS_H_INCLUDED
