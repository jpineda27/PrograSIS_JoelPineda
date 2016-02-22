#include <iostream>

using namespace std;
//validar que el numero este entre 50-100
int main()
{ int numero ;
do
{
   cout << "ingresar numero 50-100....>";
   cin >>numero;
}
    while (!((numero>50)and (numero<100)))
    return 0;
}
