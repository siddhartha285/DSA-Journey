#include <iostream>
using namespace std;
int main()
{
    int n;
    int A[n];
    int i;
    int sum=0;
    cout<<"no of elements";
    cin>>n;
    cout<<"ENTER THE ELEMENTS:";
    for(i=0;i<n;i++)
    
    cin>>A[i];
    for(i=0;i<n;i++)
    {
    sum=sum+A[i];
    }
    cout<<sum;
    return 0;
}