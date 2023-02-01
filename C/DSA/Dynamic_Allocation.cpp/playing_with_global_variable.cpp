#include<iostream>
using namespace std;
int a=10;
void fun2()
{
    a--;
    cout<<a<<endl;
    
    
}
void fun3()
{
    a=100;
    cout<<a<<endl;
    int a=20;
    cout<<a<<endl;
}
void fun1()
{
    a++;
    cout<<a<<endl;
    fun2();
    fun3();
}



int main()
{
    fun1();
    cout<<a;
}