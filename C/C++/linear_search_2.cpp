#include <iostream>
using namespace std;
int main()
{
int i,n,x;
int A[n];
cout<<"Enter no of elements";
cin>>n;
cout<<"Enter no of elements";
for (i=0;i<n;i++)
{
cin>>A[i];
}
for(int x:A)
{
cout<<x<<endl;
}
return 0;
}
