#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i=0,n;
    string str;
    cout<<"Enter your email: ";
    cin>>str;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='@')
        {
            cout<<i;
            n=i;
        }
        
    }
    cout<<endl;
    string u=str.substr(0,n);
    cout<<u;
    return 0;
}