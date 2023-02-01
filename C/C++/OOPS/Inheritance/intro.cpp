#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    
    public:
    void show()
    {
        cout<<"SHOW"<<a;
    }
};
class display:public base
{
    public:
    void display1()
    {
        cout<<"Display";
    }
};
int main()
{
    display d;
    d.a=100;
    d.show();
    d.display1();
}