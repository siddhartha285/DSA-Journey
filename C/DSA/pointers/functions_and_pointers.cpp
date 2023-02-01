#include<iostream>
using namespace std;
void print(int *p)
{
    cout<<*p<<endl;
}
void increment_pointer(int *p)
{
    p=p+1;
}
void increment(int* p)
{
    *p=*p+1;
   
}
int main()
{
    int a=10;
    int *p=&a;
    print(p);
    cout<<p<<endl;
    increment_pointer(p);
    cout<<p<<endl;
    cout<<*p<<endl;
    increment(p);
    cout<<*p<<endl;
}