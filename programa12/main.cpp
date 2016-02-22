#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

 /*generar  10 numeros aleatorios, presentarlos en la pantalla,
    al final presentar el numero mayor y el promedio de los 10 numeros
    generar los numeros entre 30-80*/
int main()
{ int i=0;
int numero;
int mayor=0;
int contar=0;
int suma=0;
int promedio=0;
 for   (i=0;i<=10;i++)
 {    numero=30 + rand()%(80-30);

     cout<< "\nvalor de la i es..."<<i<< "es"<< numero<<\n";
 }
if (numero>mayor)
{
    mayor=numero;
}
contar
suma+=numero;
}
cout <<"promedio"<<promedio<<"\n";
cout <<"numero mayor es"<< mayor<<"\n"

    return 0;
}
