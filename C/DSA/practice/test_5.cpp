#include<iostream>
using namespace std;
int index(int a[],int size,int x)
{
    if(size==0)
    {
        return -1;
    }
    if(a[size-1]==x)
    {
        return size-1;
    }
    int sm=index(a,size-1,x);
    if(sm!=-1)
    {
        return sm;
    }
    
    else
    return -1;
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
    cout<<"Enter no to check:";
    int s;
    cin>>s;
    cout<<index(a,n,s);
}