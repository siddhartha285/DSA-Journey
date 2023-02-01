#include<iostream>
using namespace std;
class base
{
    public:
    void fun1()
    {
        cout<<"fun1"<<endl;
    }

};
class derived:public base
{
    public:
    void fun1()
    {
        cout<<"fun2"<<endl;
    }

};
int main()
{
    derived d;
    d.fun1();
    return 0;
}