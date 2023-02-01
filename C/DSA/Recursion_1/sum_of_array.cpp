#include<iostream>
using namespace std;
int sum(int a[],int n)
{
    if(n==0)
    {
        return 0;
    }
    int sm=sum(a+1,n-1);
    return sm+*a;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,n);

}