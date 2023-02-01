#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int k=*x;
    *x=*y;
    *y=k;

}
int main()
{
    int a=10;
    int b=20;
    swap(&a,&b);
    cout<<a<<"  "<<b;
    return 0;
}