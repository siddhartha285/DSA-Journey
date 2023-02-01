#include<iostream>
using namespace std;
bool check(int a[],int size,int c)
{
    if(size==0)
    {
        return false;
    }
    if(*a==c)
    {
        return true;
    }
    int sm=check(a+1,size-1,c);
        return sm;


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
    cout<<check(a,n,s);

}