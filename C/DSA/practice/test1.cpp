#include<iostream>
using namespace std;
int factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    return a*factorial(a-1);
}
int main()
{
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int output=factorial(n);
    cout<<output<<endl;
}