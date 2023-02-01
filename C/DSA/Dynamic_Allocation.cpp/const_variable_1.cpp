#include<iostream>
using namespace std;
int main()
{
    int const a=10;
    // not allowed int &b=a;
    int b=10;
    int const &c=b;
    b++;
    // not allowed c++;
    int const d=10;
    int const &e=d;
    //d++ ,e++ not allowed
    

    
    cout<<b;

}