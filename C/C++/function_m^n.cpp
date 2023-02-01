#include <iostream>
using namespace std;
int power(int m,int n)
{
    int y=m;
    for(int i=1;i<n;i++)
    {
        y=y*m;
    }
    return y;
}

int main()
{
    int x=5;
    int y=3;
    int z=power(x,y);
    cout<<z;
}