#include <iostream>

using namespace std;
char nombre[30];
int turno;
double ventas;
double pcomision;
double comision;

void datos (char nombre[], int &turno, double &ventas)
{
    cout << "ingresar nombre ....";
    cin>> nombre;
    cout << "ingresar ventas.....";
    cin>> ventas;

    do
    {
        cout <<"ingresar turno 1..3";
        cin>>turno;
    }
    while (!(turno==1 or turno==2 or turno==3));

}
double porcomision (int turno)
{
    if (turno==1)
    {
        return 0.05;
    }
     else  if (turno==2)
    {
        return 0.06;
    }
    else
    {
        return 0.04;
    }
}
void calcular ( int turno, double ventas, double &pcomision, double &comision)
{

   pcomision= porcomision(turno);
   comision= ventas*pcomision;
}

int main()
{
   datos (nombre, turno, ventas);
   calcular (turno,ventas,pcomision,comision);
   cout <<"porcentaje de comision..."<<pcomision<<"\n";
   cout << "comision ganada......"<<comision<<"\n";

    return 0;
}
