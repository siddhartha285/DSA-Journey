#include <iostream>
using namespace std;
inline int maxm(int a,int b)
{
    int c=(a>b)? a:b;
    return c;
}
int main()
{
    int a,b,c;
    cout<<"Enter two numbers to compare";
    cin>>a>>b;
    c=maxm(a,b);
    cout<<c;

}