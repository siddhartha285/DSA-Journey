#include<iostream>
using namespace std;
int main()
{
    int a[10];
    a[0]=1;
    a[1]=2;
    int *p=a;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*a<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
    cout<<&p<<endl;
    cout<<p[0]<<endl;
    p++;
    cout<<p<<endl;
    p=a;
    cout<<p<<endl;
}