/*Escribe un programa que solicite al usuario ingresar la cantidad de
calificaciones que quiere promediar, luego ingrese esas calificaciones, las
almacene en un arreglo y calcule el promedio*/
#include <iostream>
using namespace std;
#define may 10
int main()
 {

  int num[may], numMayor = 0, cont = 0;
  while (cont < 10) {
    cout << "ingrese un numero: ";
    cin >> num[cont];
    cont++;
  }
  
  cont = 0;
  while (num[cont] < 10) 
  {
    if (num[cont] > numMayor) 
    {
      numMayor = num[cont];
      cont++;
    }
    cout << numMayor;
  }
}