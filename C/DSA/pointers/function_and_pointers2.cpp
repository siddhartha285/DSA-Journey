#include<iostream>
using namespace std;
void size(int a[],int size)

{
    cout<<sizeof(a)<<endl;


}
int main()
{
    int a[10];
    size(a,10);
    cout<<sizeof(a);
}
