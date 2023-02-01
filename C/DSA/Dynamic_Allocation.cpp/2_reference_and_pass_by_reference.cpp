#include<iostream>
using namespace std;
void fun1(int a)
{
    a++;
}
void fun2(int &b)
{
    b++;
}
//bad practice
int & fun3(int n)
{
    int c=n;
    return c;
}
//bad practice
int* fun(int n)
{
    int d=n;
    return &d;
}
int main()
{
    int i=10;
    int &j=i;
    cout<<i<<" "<<j<<endl;
    j++;
    cout<<i<<" "<<j<<endl;
    int k=100;
    j=k;
    cout<<i<<" "<<j<<endl;
    fun1(j);
    cout<<i<<" "<<j<<endl;
    fun2(j);
    cout<<i<<" "<<j<<endl;
    int&l=fun3(j);
    int*p=fun(i);
    cout<<*p;
    cout<<l;
    


}