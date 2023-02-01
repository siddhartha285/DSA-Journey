#include <iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cout<<"Enter no";
    cin>>n;
    sum=0;
    for(i=1;i<n;i++)
    {
    if (n%i==0)
    sum=sum+i;
    }
    cout<<sum;
    if (sum==n)
    cout<<"Perfect Number";
    else cout<<"Not Perfect Number";
    return 0;
}