#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"Entered string is: "<<s<<endl;
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        if(*it<=90 && *it>=65)
        {
        *it=*it+32;
        }
        else{
            cout<<"invalid";
            return 0;
        }
        
    }
    cout<<s;
    return 0;
}