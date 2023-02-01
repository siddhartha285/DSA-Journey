#include<iostream>
using namespace std;
int sum(int *a, int size)
{
    int b=0;
    for(int i=0;i<size;i++)
    {
        b+=a[i];

    }
    return b;
}
int main()
{
    int a[6]={1,2,3,4,5,6};
    cout<<sum(a+1,4);

}