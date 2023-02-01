#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"Enter hour '0-23'";
    cin>>hour;
    if(hour<=18 && hour>=9)
    cout<<"working";
    else
    cout<<"Not working";
    return 0;
}