#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    if (n<=0)
    cout<<"INVALID";
    else if (n==1)
    cout<<"Neither prime nor composite";
    else if (n==2)
    cout<<"Prime";

    for(i=2;i<n;i++)
    if(n%i==0)
    {
        cout<<"Not prime";
        break;
    }
    else
    {
        cout<<"Prime";

    }

    return 0;
}