#include<iostream>
using namespace std;
int main()
{
    int a[]={'a','b','c'};
    char b[]="abc";
    cout<<a<<endl;
    cout<<b;
    cout<<endl;
    char *p=&b[0];
    cout<<p<<endl;
    cout<<p[2]<<endl;
    char c1='x';
    char *pc=&c1;
    cout<<pc;
    char str[]="abcd";
    cout<<str;
    cout<<endl;
    
}