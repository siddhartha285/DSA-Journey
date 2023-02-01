#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,j;
    string s="nitin";
    string t="";
    int len=(int)s.length();
    t.resize(len);
    for (i=0,j=len-1;i<len;i++,j--)
    {
        t[i]=s[j];
    }
    cout<<t<<endl;
    if (s.compare(t)==0)
    cout<<"p";
    else
    cout<<"no p";
    return 0;
}