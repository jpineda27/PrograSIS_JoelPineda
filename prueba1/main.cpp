#include <iostream>

using namespace std;

/* Generar 5 numero con un ciclo while
   contar los que esten entre rango 1-50, 51-100,101-...

   obtener promedio de rango
   numero mayor
   menor de los numero

*/

int main()
{
    int c=0; int numero; int c1=0; int suma1=0; int prom1; int suma2=0; int c2=0; int prom2; int c3=0; int suma3=0; int prom3; int mayor = 0; int menor=9999;

    while (c<5)
    {

        c++;
        cout << "Numero" <<c << ": ";
        cin >> numero;

        if (numero<menor)
        {
            menor=numero;
        }

        if (numero>mayor)
        {
           mayor=numero;
        }

        if ((numero>=0) and (numero<51))
        {
            c1++;
            suma1+=numero;
        }
        else if ((numero>50)and (numero<101))
        {
            c2++;
            suma2+=numero;
        }
        else
        {
            c3++;
            suma3+=numero;
        }

    }

    prom1=suma1/c1;
    prom2=suma2/c2;
    prom3=suma3/c3;

    cout <<"\n" <<"Numeros entre 1-50: " <<c1 <<"\n" <<"Numeros entre 51-100: " <<c2 <<"\n" <<"Numero mayor a 100: " <<c3 <<"\n";
    cout <<"\n";
    cout <<"Numero mayor: " <<mayor <<"   Numero menor: " <<menor <<"\n";
    cout <<"\n";
    cout <<"Promedio del primer rango: " <<prom1 <<"\n";
    cout <<"Promedio del segundo rango: " <<prom2 <<"\n";
    cout <<"Promedio del tercer rango: " <<prom3 <<"\n";

    return 0;
}
