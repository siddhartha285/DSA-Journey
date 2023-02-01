#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    int *p;
    public:
    test(int a)
    {
        x=a;
        p=new int[x];
    }
    test(test &r)
    {
        x=r.x;
        p=new int[x];
    }
    int fun1()
    {
        return x;
    }
    void fun2()
    {
        for(int i=0;i<x;i++)
        {
            p[i]=i;

        }
         for(int i=0;i<x;i++)
        {
            cout<<p[i];
            
        }
    }
};
int main()
{
    test r(5);
    test r2(r);
    cout<<r.fun1()<<endl;
    r.fun2();
    r2.fun2();
    return 0;
    

}