#include <iostream>
using namespace std;
int main()
{
    float amount,dis_amount;
    cout<<"Enter the total bill amount:";
    cin>>amount;
    if (amount>=500)
    dis_amount=amount*(20.0/100.0);
    else if (amount>=100 && amount<500)
    dis_amount=amount*(10.0/100.0);
    else 
    dis_amount=0;
    cout<<"Amount= "<<amount<<endl;
    cout<<"Discounted amount= "<<dis_amount<<endl;
    cout<<"Bill= "<<amount-dis_amount;
    return 0;

}