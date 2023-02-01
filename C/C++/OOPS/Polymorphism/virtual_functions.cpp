#include<iostream>
using namespace std;
class base
{
    public:
    virtual void fun1() //modified as virtual
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
    base *p=new derived();
    p->fun1();

}