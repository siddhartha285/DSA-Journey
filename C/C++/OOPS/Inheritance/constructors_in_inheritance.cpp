#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"NON p from base"<<endl;
    }
    base(int x)
    {
        cout<<"parm from base"<<endl;
    }

};
class derived:public base
{
    public:
    derived()
    {
        cout<<"NON p from derived"<<endl;
    }
    derived(int y)
    {
        cout<<"p from derived"<<endl;

    }
     derived(int x,int y):base(x)
    {
        cout<<"p from derived"<<endl;

    }

};
int main()
{
    derived d(6);
    return 0;
}