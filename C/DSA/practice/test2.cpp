#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    return a*power(a,b-1);
}
int main()
{
    cout<<"Enter a no and power to be raised: ";
    int n,x;
    cin>>x>>n;
    int output=power(x,n);
    cout<<output<<endl;

}