#include <iostream>
using namespace std;
int main()
{
    int x,mid,l,h,i;
    int n;
    int A[n];
    cout<<"ENTER NO OF ELEMENTS";
    cin>>n;
    cout<<"Enter the elements";
    for (i=0;i<n;i++)
    cin>>A[i];
    
    cout<<"Enter element to search";
    cin>>x;
    l=0;
    h=n-1;
    while (l<h)
    {
	
    mid=(l+h)/2;
    cout<<mid;
    if (x==A[mid])
    cout<<mid;
    
    else if (x<A[mid])
    l=l+1;
    else 
    h=h+1;
}
   


    cout<<"Unsuccessfull";
    return 0;



    
}
