#include <iostream>
using namespace std;
int main()
{
    int n,r,s,x,sum=0;
    cout<<"Enter x\n";
    cin>>x;
    n=x;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=r*r*r;
        sum=sum+s;
        
        
    }
    if(sum==x)
    {
        cout<<"Armstrong no";

    }
    else
    {
        cout<<"Not armstrong no";
    }
    return 0;
}