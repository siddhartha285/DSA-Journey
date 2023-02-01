#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter amount:";
    cin>>a;
    b=a-0.2*a;
    if (a>=5000)
    {
    cout<<"Discount offered 20%:";
    cout<<b;
    }
    else if(a<5000 && a>=2000)
    {
    cout<<"Discount offered 10%:";
    cout<<a-((float)10/100*a);
    }
    else
    {
    cout<<"Discount offered 5%";
    cout<<a-((5.0/100.0)*a);}
    return 0;


}