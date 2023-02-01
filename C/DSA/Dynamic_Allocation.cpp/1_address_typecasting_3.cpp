#include<iostream>
using namespace std;
int main()
{
    char a[]={'a','b','c','d','\0'};
    char *pc=&a[0];
    int *p=(int *)pc;
    cout<<*p;

}