#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count=0;
    string str="Welcome";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it;
        count=count+1;
    }
    cout<<endl;
    cout<<count;
    return 0;


    
}