//to fin xto power y
#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    int sm=power(a,b-1);
    return a*sm;
}
int main()
{
    int x,y;
    cout<<"Enter base and power";
    cin>>x>>y;
    int c=power(x,y);
    cout<<c;
}