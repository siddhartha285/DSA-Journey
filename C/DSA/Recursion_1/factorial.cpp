#include<iostream>
using namespace std;
int fac(int a)
{
    if(a==1)
    {
        return 1;
    }
    
    return a*fac(a-1);
}
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int c=fac(n);
    cout<<c;

}