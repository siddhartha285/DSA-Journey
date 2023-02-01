#include<iostream>
using namespace std;
int main()
{
    int avg,m1,m2,m3;
    cout<<"Enter the marks:"<<endl;
    cin>>m1>>m2>>m3;
    avg=(float)(m1+m2+m3)/3.0;
    if (avg>=80)
    cout<<"A";
    else if(avg<80 && avg>=30)
    cout<<"B";
    else if(avg<30)
    cout<<"C";
    return 0;

}