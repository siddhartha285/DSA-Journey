#include <iostream>
using namespace std;
int main()
{
    int i,n,count;
    cout<<"Enter Number"<<endl;
    cin>>n;
    count=0;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
        count++;
        
        }
    }
        if (count==2)
         {
        cout<<"Prime number";
         }
         else
         {
         cout<<"Not Prime Number";
        }
        
        return 0;
    }
