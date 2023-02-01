#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    cin>>str;
    string str2="";
    str2.resize(str.length());
   
    int i=0;
    string::reverse_iterator it;
    for(it=str.rbegin();it!=str.rend();it++)
    {
        str2[i]=*it;
        i++;
    }
    cout<<endl;
    if(str2==str)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Sorry! Better luck next time";
    }
    return 0;

}
