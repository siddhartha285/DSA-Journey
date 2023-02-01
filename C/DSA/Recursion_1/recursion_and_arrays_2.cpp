#include<iostream>
using namespace std;
bool is_sorted(int x[],int size)

{
    if(size==0 || size==1)
    {
        return true;
    }

    bool sm= is_sorted(x+1,size-1);
    if(!sm)
    {
        return false;
    }
     if(x[0]>x[1])
    {
        return false;
    }
    else
    {
        return true;
    }
    
}   



int main()
{
    int a[]={1,2,3,4,5,6};
    bool x=is_sorted(a,6);
    cout<<x;
}