#include<iostream>
using namespace std;
int index(int a[],int size,int x)
{
    if(size==0)
    {
        return -1;
    }
  
    int sm=index(a+1,size-1,x);
  
    if(sm==-1)
    {
        if(a[0]==x)
        {
            return 0;
        }
        else 
        return -1;
    }
    else
    return sm+1;
        if(a[0]==x)
    {
        return 0;
    }
  
  
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