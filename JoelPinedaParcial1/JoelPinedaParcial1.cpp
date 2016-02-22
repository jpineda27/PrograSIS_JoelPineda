#include <iostream>

using namespace std;

int turno=0, hnormal,hextra;
double phnormal, phextra;
int ptotal;
char nombre [35];



void ingresoPlanilla(char nombre[], int turno, int hnormal, int hextra)
{
    cout<<"Ingrese el nombre: ";
    cin.getline(nombre,30);
    cout<<"Numero de horas normales: ";
    cin >>hnormal;
    cout<<"Numero de horas extras: ";
    cin >>hextra;

    do
    {
        cout<<"Turno en que trabajo: ";
        cin>>turno;
    }while(!((turno>0) and (turno<5)));
}

double pagoxnormal(int turno)
{
    if ((turno==1) or (turno==3))
    {return 200;}
    else
    {return 300;}
}

double pagoxextra(int turno)
{
    if (!(turno>0) and !(turno<2))
    {return 250;}
    else if ((turno>2) and (turno<4))
    {return 250;}
    else
    {return 350;}
}

void calculos(int turno,int hnormal,int hextra,double &phnormal,double &phextra, int &ptotal)
{
    phnormal = pagoxnormal(turno);
    phextra = pagoxextra(turno);

}

int main()
{
    ingresoPlanilla(nombre,turno,hnormal,hextra);
    calculos(turno,hnormal,hextra,phnormal,phextra,ptotal);
    cout<<"Precio de hora Normal: " <<phnormal <<"\n";
    cout<<"Precio de hora Extra: " <<phextra <<"\n";
}

