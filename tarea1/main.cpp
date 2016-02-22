#include <iostream>

using namespace std;

int main()
{
    int num; int c=0; int c1=0; int c2=0; int c3=0; int mayor=0;

    while (c<10)
    {
    c++;
    cout <<"Numero " <<c <<" :";
    cin >>num;

    if (num>mayor)
        mayor=num;

    if ((num>0) and (num<51))
        c1++;
    else if ((num>50) and (num<81))
        c2++;
    else
        c3++;
    }
    cout <<"\n" <<"Entre 1-50: " <<c1 <<"    Entre 51-80: " <<c2 <<"    Mayores a 80: " <<c3 <<"    El numero mayor fue: " <<mayor <<"\n";


    return 0;
}
