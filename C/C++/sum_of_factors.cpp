#include <iostream>
using namespace std;
int main()
{
    int i,n,x;
    cout<<"Enter number:"<<endl;
    cin>>n;
    x=0;
    for(i=1;i<=n;i++)
    if(n%i==0)
    x=x+i;
    cout<<x;
    return 0;


}
