#include <iostream>
using namespace std;
int main()
{
    int x,mid,l,h,i;
    
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    
    cout<<"Enter element to search";
    cin>>x;
    l=0;
    h=9;
    while (l<=h)
    {
    mid=(l+h)/2;
    if (x==A[mid])
    {
    cout<<mid;
    return 0;
    }
    else if (x>A[mid])
    l=mid+1;
    else if (x<A[mid])
    h=mid-1;
    }

    cout<<"Unsuccessfull";
    return 0;



    
}