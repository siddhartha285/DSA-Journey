#include<iostream>
using namespace std;
int main()
{
    //allowed *p++
    int a=10;
    int *p=&a;
    *p++;
    cout<<a<<endl;
    //not allowed *q++
    int const b=10;
    //int *q=&b;

    cout<<b<<endl;
    //not alllowed c++,*r++
    //allowed r++
    int const c=10;
    int const *r=&c;
    cout<<r<<endl;
    (*r)++;
    r++;
   
    *r++;
   
    cout<<c<<"c"<<endl;
    //allowed d++ s++
    //not allowed *s++
    int d=10;
    int const *s=&d;
    *s++;
    d++;
    s++;
    
    cout<<d<<"d"<<endl;
    //allowed e++
    //not allowed *p++ p++
    int e=10;
    int const * const t=&e;
    e++;
    
    cout<<e;
    //not allowed *u++ u++ 
    //allowed f++
    int f=10;
    int * const u=&f;
  
    
    cout<<u<<endl;
    cout<<*u<<endl;
    




}