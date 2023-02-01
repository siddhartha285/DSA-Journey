#include<iostream>
using namespace std;
int main()
{
    int i,n,c,sum,x;
    cout<<"Enter no of terms";
    cin>>n;
    c=0;
    sum=0;
    for(i=1;i<=n;i++)
    {
        for(x=1;x<100;++x)
        {
            c=c+x;
            
            break;
        }
        cout<<x<<endl;
        sum=sum+c;
        c=0;
    }
    

}