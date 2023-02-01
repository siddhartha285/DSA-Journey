#include <iostream>
using namespace std;
int max3(int a,int b, int c)
{ 
    if(a>b && a>c)
    {
        return a;
    }
    else if (b>c)
    {
        return b;
    }
    else{
        return c;
    }

}
int main()
{
    int z=max3(7,4,5);
    cout<<z;
}
