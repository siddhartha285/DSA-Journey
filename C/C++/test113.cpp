#include<iostream>
using namespace std;
int main()
{
    int key;
    int A[]={1,2,3,4,5,6,7,8,9,34,45,67,456};
    cout<<"Enter key: ";
    cin>>key;
    int l=0,h=12;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(key<A[mid])
        {
            h=mid-1;
        }
        else if(key>A[mid])
        {
            l=mid+1;
        }
        else if(key==A[mid])
        {
            cout<<mid;
            return 0; 
        }
    }
    cout<<"Unsuccesfull";
    return 0;
}