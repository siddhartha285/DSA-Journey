#include <iostream>
using namespace std;
int max2(int x,int y)
{
    int max;
    if(x>y)
    {
        
        return x;
    }
    else
    {
        
        return y;
    }
}
int main()
{
    int r=max2(2,3);
    cout<<r;
    return 0;
}
