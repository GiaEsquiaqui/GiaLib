#include "operaciones_basicas.h"
#include "Booleanos.h"
#include <iostream>

using namespace std;

bool enteros_palindromo(int* a, int b){
  int i=0;
  //la variable b hace referencia a la longitud del arreglo.
  int j=b-1;
  while(i != j && j > i){
    if(a[i] == a[j]){
      return true;
    }else{
      return false;
    };
    i++;
    j--;
  };
};

bool cero_mas_que_uno(int* a, int b){
  int cero;
  int uno;
  for(int i=0; i < b; i++){
    if(a[i]==0){
      cero++;
    };
    if(a[i]==1){
      uno++;
    };
  };
  if(cero>uno){
    return true;
  }else{
    return false;
  };
};

bool ylogica(bool a, bool b, bool c){
  cout << "Escriba el valor de verdad de a: (1)Verdadero. (0)Falso.\n";
  cin>>a;
  cout << "Escriba el valor de verdad de b: (1)Verdadero. (0)Falso.\n";
  cin>>b;
  cout << "El y logico de a y b es: " << (a && b) << endl;
};

bool triangulo(double a, double b, double c){
  cout << "Digite los valores de los ángulos a continuación: " << endl;
  leer_real(cin, a);
  leer_real(cin, b);
  leer_real(cin, c);
  if (a+b+c == 180){
    cout << true;
  }else{
    cout << false;
  }
};
