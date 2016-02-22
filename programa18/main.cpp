#include <iostream>

using namespace std;
int main()
{
    int x, y;

    for(x=5;x>=1;x--)
    {
        for(y=1;y<=x;y++)
        {
          cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
