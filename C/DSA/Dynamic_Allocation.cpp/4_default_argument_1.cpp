#include<iostream>
using namespace std;
int sum(int a[],int size,int start=0)
{
    size=start+size;
    int ans=0;
    for(int i=start;i<size;i++)
    {
        ans+=a[i];

    }
    return ans;
}

int main()
{
    int a[10];
    for (int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,2,2);


}