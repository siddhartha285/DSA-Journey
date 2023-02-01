#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    int A[n];
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    int avg=sum/n;
    cout<<"Average is: "<<avg;
}