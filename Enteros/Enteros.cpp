#include "operaciones_basicas.h"
#include "Enteros.h"
#include <iostream>

using namespace std;



int factorial(int n){
  if(n==0 || n==1){
    return 1;
  };
  if(n==2){
    return 2;
  }else{
    return n*factorial(n-1);
  };
};

int num_cifras(int n){
  int bandera;
  while(n%10 != 0){
    n = n/10;
    bandera++;
  };
  return bandera;
};

int gallina(int m){
  int h= producto_entero(m, 2);
  return h+1;
};

int baldosines(int l){
  if(l==1 || l==2){
    return l;
  }else{
    return baldosines(l-1)+baldosines(l-2);
  };
};

int lados_triangulo(double l1, double l2, double l3){
  if(l1+l2>l3 && l2+l3>l1 && l1+l3>l2){
    cout << "Los lados si forman un triangulo" << endl;
  }else{
    cout << "Los lados no forman un triangulo" << endl;
  };
  return 0;
};

int NumeroPatasPatos(int p){
  cout << "Programa para saber el numero de patas segun la cantidad de patos: " << endl;
  leer_entero(cin, p);
  cout << "En total tienen " << producto_entero(p, 2) << " patas.\n\n";
};

int NumeroPatasCaballos(int c){
    cout << "Programa para saber el numero de patas segun la cantidad de caballos: " << endl;
    leer_entero(cin, c);
    cout << "En total tienen " << producto_entero(c, 4) << " patas.\n\n";
};

int NumeroCuadradadosCuaderno(int h, int c, int f){
    cout << "Programa que define el numero de cuadrados en un cuaderno:\nNumero de hojas del cuaderno:\n";
    leer_entero(cin, h);
    cout << "Numero de columnas por hoja:\n";
    leer_entero(cin, c);
    cout << "Numero filas por hoja:\n";
    leer_entero(cin, f);
    cout << "El numero total de cuadrados en el cuaderno es " << producto_real3((c-1), (f-1), h) << ".\n\n";
};

int NumeroH2o(int h, int i){
    cout <<"Programa para encontrar las moleculas de agua que se forman dado un el numero de hidrogeno y oxigeno:" << endl;
    cout << "Hidrogeno:" << endl;
    leer_entero(cin, h);
    cout << "Oxigeno:" << endl;
    leer_entero(cin, i);
    if (i<(h/2)){
        cout << "Las moleculas de agua formadas son "<< i << "." << endl;
    }else{
        cout << "Las moleculas de agua formadas son "<< (h/2) << "." << endl;
    };
};
int menor(int x, int y, int z){
    if(x <= y && x <= z){
        return x;
    }else if(y <= x && y <= z){
        return y;
    }else{
        return z;
    };
};

int mayor(int x, int y, int z){
    if(x >= y && x >= z){
        return x;
    }else if(y >= x && y >= z){
        return y;
    }else{
        return z;
    };
};

int techo(int a){
  cout << "Ingrese el valor (Real):";
  cin >> a;
  cout << "el techo de ese número es: " << a+1 << endl;
}

int piso(int a){
  cout << "Ingrese el valor (Real):";
  cin >> a;
  cout << "el piso de ese número es: " << a << endl;
}

int bolitas(double x, double y, double z, double r, int b){
  cout << "Ingrese las dimensiones de la caja:\nX: ";
  leer_real(cin, x);
  cout << "Y: ";
  leer_real(cin, y);
  cout << "Z: ";
  leer_real(cin, z);
  cout << "Radio? ";
  leer_real(cin, r);
  b = division_real(producto_real3(x, y, z), producto_real3(2*r, 2*r, 2*r));
  cout << "La cantidad de bolitas que puede empacar son: " << b << endl;
};

int ramitas(double a, int m, int r){
  cout << "Cantidad de años?" << endl;
  leer_real(cin, a);
  m = a*12;
  operacion_ramitas(m, r);
  cout << r;
};

int operacion_ramitas(int m, int r){
  if(m == 1){
    r = 2;
  }else{
    r = ((operacion_ramitas(m-1, r))*2)+2;
  };
  return r;
}

int girasoles(int k, int s, int r, int t){
  cout << "Cuantos pétalos tiene en el primer mes?" << endl;
  leer_entero(cin, k);
  cout << "Cuantos tiene en el segundo mes?" << endl;
  leer_entero(cin, s);
  cout << "Cuantos girasoles sembró hace dos meses?" << endl;
  leer_entero(cin, r);
  cout << "Cuantos sembró hace un mes?" << endl;
  leer_entero(cin, t);
  cout << "La cantidad actual de pétalos es: " << suma_entero(producto_entero(k, t), producto_entero(s, r)) << endl;
};
