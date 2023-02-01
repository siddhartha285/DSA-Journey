#include <iostream>
using namespace std;
int main()
{
    char a='A';
    int b=a;
    cout<<b<<endl;
    char *pc=&a;
    int *p=(int *)pc;
    cout<<p<<endl;
    cout<<*p<<endl;

}