#include "operaciones_basicas.h"
#include "Arreglos.h"
#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

Arreglo_Entero crear_arreglo_entero (int n){
  return new int[n];
};

void destruir_arreglo_entero (Arreglo_Entero a){
  delete[] a;
};

istream& leer_arreglo_entero (istream& is, Arreglo_Entero& a, int n){
  for (int i=0; i<n; i++){
    cout << "Digite el valor "  << i << ": ";
    is >> a[i];
  };
  return is;
};

ostream& escribir_arreglo_entero (ostream& os, Arreglo_Entero a, int n){
  for (int i=0; i<n; i++){
    os << "El valor "  << i << "es: " << a[i];
  };
  return os;
};

double Reales_Maximo(double arreglo[], int n) {
    double max, maxResto;
    if (n == 1){
            max = arreglo[0];
    }else{
        maxResto = Reales_Maximo(arreglo+1, n-1);
        if (arreglo[0] > maxResto){
                max = arreglo[0];
        }else{
            max = maxResto;
            };
    };
    return(max);
};

double Reales_Minimo(double arreglo[], int n) {
    double min, minResto;
    if (n == 1){
            min = arreglo[0];
    }else{
        minResto = Reales_Minimo(arreglo+1, n-1);
        if (arreglo[0] < minResto){
                min = arreglo[0];
        }else{
            min = minResto;
            };
    };
    return(min);
};

int Enteros_Maximo(int* arreglo, int n) {
    int max, maxResto;
    if (n == 1){
            max = arreglo[0];
    }else{
        maxResto = Enteros_Maximo(arreglo+1, n-1);
        if (arreglo[0] > maxResto){
                max = arreglo[0];
        }else{
            max = maxResto;
            };
    };
    return(max);
};

double producto(double arreglo[], int n) {
    double prod;
    double prodResto;
    if (n == 1){
            prod = arreglo[0];
    }else if (n == 2){
        prod = arreglo[0]*(arreglo[1]);
    }else{
        prodResto = producto(arreglo+1, n-1);
        prod = arreglo[0]*prodResto;
    };
    return(prod);
};

int promedio(int arreglo[], int n){
    int sum;
    int sumResto;
    if (n == 1){
            sum = arreglo[0];
    }else if (n == 2){
        sum = (arreglo[0]+arreglo[1]);
    }else{
        sumResto = promedio(arreglo+1, n-1);
        sum = arreglo[0]+sumResto;
    };
    return (sum/n);
};

int arreglo_may_num(int arreglo[], double n, int m){
  m = 0;
  if(arreglo[m] == n){
        return 0;
  }else if(arreglo[0] > n){
      return 1+(arreglo_may_num(arreglo,n,m+1));
      }
};

Matriz_Entero crear_matriz_entero(int n, int m){
    int** x = new int*[n];
    for(int i = 0; i < n; i++){
      x[i] = new int[m];
    };
  return x;
};

void liberar_matriz_int(int** x, int n, int m){
  for(int i = 0; i < n; i++){
    delete[] x[i];
  };
  delete[] x;
  return;
};

istream& leer_matriz_entero (istream& is, Matriz_Entero& a, int i, int j){
  for(int k=0; k<i; k++){
    for(int l=0; l<j; l++){
      cout << "Digite el valor ["  << k << "][" << l << "]: ";
      is >> a[k][l];
    };
  };
  return is;
};

istream& leer_matriz_entero_nocout(istream& is, Matriz_Entero& a, int i, int j){
  for(int k=0; k<i; k++){
    for(int l=0; l<j; l++){
      is >> a[k][l];
    };
  };
  return is;
};

ostream& escribir_matriz_int(ostream& os, int** X, int n, int m){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(j==0){
      os << "\n" << X[i][j];
      }else{
        os << "  " << X[i][j];
      };
    };
  };
  return os;
};

istream& leer_charstar (istream& is, char* c){
  cout << "Ingrese la(s) palabra(s): ";
  is>>c;
};
