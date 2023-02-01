#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="sidiv285@gmail.com";
    int i=(int)s.find('@');
    string u=s.substr(0,i);
    cout<<u;
}