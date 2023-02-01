#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[4];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    for(int i=0;i<4;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    delete []p;
    p=nullptr;
}