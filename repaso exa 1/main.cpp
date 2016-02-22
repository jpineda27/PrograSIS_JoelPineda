#include <iostream>

using namespace std;

int turno;
double ventas, pcomis, comis;
char nombre[30];

void ingresoDatos(char nombre[], double &ventas, int turno)
{
    cout<<"Ingrese el nombre: ";
    cin.getline(nombre,30);
    cout<<"Venta: ";
    cin >>ventas;
    do
    {
        cout<<"Turno: ";
        cin>>turno;
    }while(!((turno>=1)and (turno<=3)));
}

double porcomis(int turno)
    {
        if (turno==1)
        {return 0.05;}
        else if (turno==2)
        {return 0.06;}
        else
        {return 0.04;}
    }

void comision(int turno, double ventas, double &pcomis, double &comis)
{
    pcomis=porcomis(turno);
    comis=ventas*pcomis;
}

int main()
{
    ingresoDatos(nombre, ventas, turno);
    comision(turno,ventas,pcomis,comis);
    cout <<"% de comision es : " <<pcomis <<"\n";
    cout <<"Comision generada : " <<comis <<"\n";
}
