#include <iostream>
using namespace std;
int main()
{
    int A[2]={1,2};
    int *p;
    p= new int [5];
    cout<<&p<<endl;;
    delete []p;
    p=nullptr;
    cout<<p;
    return 0;
}