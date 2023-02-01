#include <iostream>
using namespace std;
int main()
{
    int n,i,sum;
    cout<<"Enter n till the sum u want:"<<endl;
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++)
    sum=sum+i;

    cout<<sum;
    return 0;

}