#include <iostream>
using namespace std;
int main()
{
    char x='a';
    char S[6]= "Hello";
    cout<<S;
    cout<<endl;
    cout<<endl;
    char b[]={'H','e','l','l','o','\0'};
    for (int i=0;i<5;i++)
    {
        cout<<S[i]<<endl;
    }
    for(auto x:S)
    {
        cout<<x<<endl;
    }

    /* char *s="Hello"; */
    string A = "hello";
    cout<<A;
    cout<<b;
}