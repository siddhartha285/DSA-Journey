#include<iostream>
using namespace std;
void search(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            cout<<i;
        }
    }
}
int main()
{
    int A[7]={1,2,3,6,4,7,8};
    search(A,7,1);
}