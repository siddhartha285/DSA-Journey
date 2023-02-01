#include<iostream>
using namespace std;
bool is_sorted(int x[],int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(x[0]>x[1])
    {
        return false;
    }
    return is_sorted(x+1,size-1);
}
int main()
{
    int a[]={1,2,3,4,8,6};
    cout<<is_sorted(a,6);
}