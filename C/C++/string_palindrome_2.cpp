#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="madam";
    string t;
    int len=(int)s.length();
    t.resize(len);
    int i=0;
    string::reverse_iterator it;
    for(it=s.rbegin();it!=s.rend();it++)
    {

            t[i]=*it;
             i++;
        }
     cout<<t<<endl;
       

    
    if (t.compare(s)==0)
    cout<<"P";
    else
    cout<<"not p";
}
   
