#include <iostream>
using namespace std;
int main()
{
    int d,a,b,c;
    cout<<"Enter a b c"<<endl;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d>0)
    cout<<"real and diff";
    else if(d==0)
    cout<<"real and equal";
    else
    cout<<"imaginary";
    return 0;

}
