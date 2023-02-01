#include <iostream>
using namespace std;
int main()
{
    int r,n,m,x=0;
    cout<<"Enter number";
    cin>>n;
    m=n;
    while(m>0)
    {
        r=m%10;
        m=m/10;
        x=x*10+r;

    }
    if(x==n)
    cout<<"Palindrome";
    else
    cout<<"NOT palindrome";
    return 0;
}