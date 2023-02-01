#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        if(*it>=65 && *it<=90)
        {
            
            cout<<*it;
        }
        else if (*it>=97 && *it<=122)
        {
            *it=*it-32;
            cout<<*it;
        }
        else 
        {
            cout<<*it;
        }
    }
}