#include <iostream>
using namespace std;
int main()
{
    int n,i,f;
    cout<<"Enter number: ";
    cin>>n;
    f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    cout<<f;
    return 0;
}