#include<iostream>
using namespace std;
void print(int a)
{
    if(a>0)
    {
    print(a-1);
    cout<<a<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
}