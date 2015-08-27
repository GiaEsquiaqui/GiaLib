#include "operaciones_basicas.h"
#include "Reales.h"
#include <math.h>
#include <iostream>

using namespace std;

double sumaperimetros(double* r, int n){
  double s= 0.0;
  for(int i=0;i<=n-1;i++){
        s=s+2.0*3.1415926*r[i];
  };
  return s;
};

double radios(){
  int m;
  cout << "Cuantos radios va a ingresar? ";
  cin>>m;
  double* radio = new double[m];
  for (int i=0;i<=m-1;i++){
    cout << "Ingrese el radio " << i << ": ";
    cin>>radio[i];
  };
  cout << "la suma de los perimetros es: " << sumaperimetros(radio, m) << endl;
  delete[] radio;
  return 0;
};


double chavo(int n){
  double t;
  if(n==0){
    t=0.5;
  }else{
    t=(chavo(n-1))/2;
  };
  return t;
};

double circulo (double a){
  cout << "Programa que dado el radio de un circulo permite saber el area de este." << endl;
  leer_real(cin, a);
  cout << "El area de ese circulo es:  " << producto_real3(a,a,3.14159265358979323846) << endl;

};

double perimetroCirculo(double a){
  cout << "Programa que dado el radio de un circulo permite saber el perimetro de este." << endl;
  leer_real(cin, a);
  cout << "El perimetro de ese circulo es:  " << producto_real3(2.0,a,3.14159265358979323846) << endl;
}

double PerimetroTriangulo(double l1, double l2, double l3){
  cout << "Lado 1." << endl;
  leer_real(cin, l1);
  cout << "Lado 2." << endl;
  leer_real(cin, l2);
  cout << "Lado 3." << endl;
  leer_real(cin, l3);
  cout << "el perimetro del triangulo es " << suma_real3(l1, l2, l3) << endl;
};

double AreaTriangulo(double b, double h){
  cout << "Base." << endl;
  leer_real(cin, b);
  cout << "Altura." << endl;
  leer_real(cin, h);
  cout << "El area del triangulo es " << division_real(producto_real(h, b), 2) << endl;
};

double AreaRectangulo(double a, double b){
  cout << "Base." << endl;
  leer_real(cin, a);
  cout << "Altura." << endl;
  leer_real(cin, b);
  cout << "El area del rectangulo es " << producto_real(a, b) << endl;
};

double distancias (double b, double c){
    cout <<"Programa para encontrar distancias recorridas dado la velocidad y el tiempo:" << endl;
    cout << "Velocidad." << endl;
    leer_real(cin, b);
    cout << "Tiempo." << endl;
    leer_real(cin, c);
    cout << "La distancia recorrida es de: "<< producto_real(b, c);
};

double fuerza(double d, double e){
    cout <<"Programa para encontrar fuerza dado la masa y la aceleracion" << endl;
    cout << "Masa." << endl;
    leer_real(cin, d);
    cout << "Aceleracion." << endl;
    leer_real(cin, e);
    cout << "La fuerza es de: "<< producto_real (d,e);
};

double pulgadas (double f, double g){
    cout <<"Programa para encontrar las pulgadas de un televisor dado el ancho y la altura" << endl;
    cout << "Base (en centimetros)." << endl;
    leer_real(cin, f);
    cout << "Altura (en centimetros)." << endl;
    leer_real(cin, g);
    cout << "Las pulgadas del televisor son:   "<< cent_a_inch(f, g) << endl;
};

double programa_arroz_para3(double a){
  cout << "Cantidad de granos de arroz?" << endl;
  leer_real(cin, a);
  cout << "Debe dar " << division_real(a, 3) << " granos por hijo." << endl;
};

double programa_arroz_paran(double m, int n){
    cout << "Numero de granos\n " << endl;
    leer_real(cin, m);
    cout << "Numero de hijos\n" << endl;
    leer_entero(cin, n);
    cout << "Debe dar " << division_mixta(m, n) << " granos por hijo" << endl;
};

double polinomio(double a, double b, double c, double x){
    return a*(x*x)+b*x+c;
};

double programa_polinomio(double n, double o, double p, double q){
  cout << "Programa que da el valor de un polinomio de grado dos:\nPara la formula ax^2+bx+c:\nIngrese el valor de a: ";
  cin>>n;
  cout << "Ingrese el valor de b: ";
  cin>>o;
  cout << "Ingrese el valor de c: ";
  cin>>p;
  cout << "Para la formula " << n << "x^2+" << p << "x+" << p << "Ingrese el valor de x: ";
  cin>>q;
  cout << "El valor del polinomio es " << polinomio(n,o,p,q) << endl;
}

double circulo_en_cuadrado(double a){
  cout << "Ingrese el tamaño del lado del cuadrado: " << endl;
  leer_real(cin, a);
  cout << "La máxima area del circulo que cabe en ese cuadrado es: " << producto_real3(3.14159265358979323846, division_real(a, 2), division_real(a, 2));
};

double cuadrado_en_circulo(double a){
  cout << "Ingrese el tamaño del radio del circulo: " << endl;
  leer_real(cin, a);
  cout << "El área máxima del cuadrado es: " << producto_real3(2.0, a, a) << endl;
};

double proyectil(double v, double a){
  cout << "Ingrese el valor de la velocidad: " << endl;
  leer_real(cin, v);
  cout << "Ingrese el valor del ángulo: " << endl;
  leer_real(cin, a);
  cout << "La distancia horizontal que recorrió el proyectil es: " << division_real(producto_real3(v, 2.0, sin(2*a)), 9.81) << endl;
};

double soldados(int s, double m){
  cout << "Qué cantidad de soldados hay?" << endl;
  leer_entero(cin, s);
  cout << "Cuál es la longitud de los brazos?" << endl;
  leer_real(cin, m);
  double l = division_real(producto_mixto(m, s),4);
  cout << "El área del cuadrado es: " << producto_real(l, l) << endl;

};
