#ifndef ARREGLOS_H_INCLUDED
#define ARREGLOS_H_INCLUDED
#include "operaciones_basicas.h"
#include <iostream>

using namespace std;

typedef int* Arreglo_Entero;
typedef int** Matriz_Entero;
Arreglo_Entero crear_arreglo_entero (int);
Matriz_Entero crear_matriz_entero(int, int);
void destruir_arreglo_entero (Arreglo_Entero);
void destruir_matriz_entero (Matriz_Entero);
istream& leer_arreglo_entero (istream&, Arreglo_Entero&, int);
istream& leer_matriz_entero (istream&, Matriz_Entero&, int, int);
istream& leer_charstar (istream&, char*);
istream& leer_matriz_entero_nocout(istream&, Matriz_Entero&, int, int);
ostream& escribir_arreglo_entero (ostream&, Arreglo_Entero, int);
ostream& escribir_matriz_int(ostream& os, int** X, int n, int m);
double Reales_Maximo(double, int);
int Enteros_Maximo(int, int);
double producto(double, int);
int promedio(int, int);
int arreglo_may_num(int, double, int);
int* cuentaletras(char*);
double Reales_Minimo(double, int);

#endif // ARREGLOS_H_INCLUDED
