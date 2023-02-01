#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="today";
    string::reverse_iterator it;
    for (it=s.rbegin();it!=s.rend();it++)
    {
        *it=*it-32;
        cout<<*it;
    }
    
}