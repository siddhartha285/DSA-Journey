#include<iostream>
using namespace std;
  inline int sum(int a,int b=0,int c=0,int d=0)
    {
        return a+b+c+d;

    }
int main()
{
    cout<<sum(2,3,4,5)<<endl;
    cout<<sum(2,3,4)<<endl;
    cout<<sum(2,3)<<endl;
    cout<<sum(2)<<endl;
}
