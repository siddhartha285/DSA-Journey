#include<iostream>
using namespace std;
int no(int a)
{
    if(a/10==0)
    {
        return 1;
    }
    int smalloutput=no(a/10);
    return smalloutput+1;

}
int main()
{
    int n;
    cin>>n;
    cout<<no(n);

}