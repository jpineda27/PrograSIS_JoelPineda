#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int tabla, respx, i;
    char resp;
    do
    {
        cout<<"Tabla de multiplicar...: ";
        cin>>tabla;
    }while (!((tabla>=5) and (tabla<=10)));

    {
        for (i=1;i<=10;i++)
        {
            respx = tabla * i;
            cout<<i <<" x " <<tabla <<" = " <<respx <<"\n";
        }
            _flushall();
            do
            {
                cout<<"Desea continuar:  ";
                cin.get(resp);
                _flushall();
            }while ((toupper(resp) !='S') and (toupper(resp) !='N'));

    }while(toupper(resp)=='S');
}
