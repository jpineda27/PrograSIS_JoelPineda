#include <iostream>

using namespace std;

 int i=0;

int k;
int main()
{


    for (i=1;i<=5;i++)
    {
        for (k=1;k<=i;k++);
        {
            cout<<k;
        }
        cout<<"\n";
    }



    return 0;
}

