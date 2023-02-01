#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cout<<"enter a numver";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    cout<<count;
    if (count==2)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"not prime";
    }

}