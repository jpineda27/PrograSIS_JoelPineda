#include <iostream>

using namespace std;

/* 1)Producir la siguiente salida
*****
****
**
*
Usando ciclo for anidados.

2) Encontrar los multiplos de 3 entre 100-1000

3)En arduino usando el sensor ultrasonico
encender un LED cuando este se encuentre entre
5 cm y 10 cm*/

int main()

{
    int i;

    cout<<"Numeros multiplos de 3 entre 100-1000""\n";

    for(i=100;i<=1000;i++)

    {

        if (i%3==0)
        {
          cout<<i<<"\n";
        }

    }

    return 0;
}
