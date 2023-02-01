#include<iostream>
using namespace std;
void increment1(int **p)
{
    p=p+1;
}
void increment2(int **p)
{
    *p=*p+1;
}
void increment3(int **p)
{
    **p=**p+1;
}
int main()
{
    int a=10;
    int *p=&a;
    int **ps=&p;
    cout<<&a<<" "<<p<<" "<<*ps<<endl;
    cout<<a<<" "<<*p<<" "<<**ps<<endl;
    cout<<&p<<" "<<ps<<endl;
    increment1(ps);
    cout<<ps<<endl;
    increment2(ps);
    cout<<p<<ps<<endl;
    increment3(ps);
    cout<<ps<<endl;

}