#include<iostream>
using namespace std;
bool issorted(int arr[],int size)
{
    if(size==0)
    {
        return true;
    }
    bool sm=issorted(arr+1,size-1);
    if(arr[0]>arr[1])
    {
        return false;

    }
    else
    
    return sm;
}
int main()
{
    int arr[]={1,1,2,3,5,9};
    if(issorted(arr,6))
    {
        cout<<"yes";

    }
    else{
        cout<<"no";
    }
}