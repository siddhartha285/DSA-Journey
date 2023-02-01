#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<a<<" "<<p<<" "<<&a<<" "<<*p<<" "<<&p<<endl;
    float b=10.2f;
    float *q=&b;
    cout<<b<<" "<<q<<" "<<&b<<" "<<*q<<" "<<&q<<endl;
    string c="ab";
    string *r=&c;
    cout<<c<<" "<<r<<" "<<&c<<" "<<*r<<" "<<&r<<endl;
    int d=*p;
    cout<<d<<endl;
    int *s=p;
    cout<<s<<" "<<p<<" "<<&a<<endl;
    int **t=&p;
    cout<<t<<" "<<&p<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(q)<<endl;
    cout<<sizeof(r)<<endl;

    return 0;
}