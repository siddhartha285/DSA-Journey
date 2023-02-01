#include<iostream>
using namespace std;
int main()
{
    int *a=new int;
    *a=10;
    cout<<a<<" "<<*a<<endl;
    delete a;
    int n;
    cout<<"enter the size:";
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int max=p[0];
    for(int i=0;i<n;i++)
    {
        if(max<p[i])
        {
            max=p[i];
        }
    }
    cout<<max;
    delete []p;
}