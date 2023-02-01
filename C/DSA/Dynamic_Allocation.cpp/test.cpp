#include <iostream>
using namespace std;

int main(){
 int a=65;
 int *p=&a;
 char *pc=(char *)p;
 cout<<p<<endl;
cout<<pc<<endl;
 cout<<*pc<<endl;
}