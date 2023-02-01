#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,t;
    s="hello";
    s.append("bye");
    cout<<s<<endl;
    s.insert(3,"kk");
    cout<<s<<endl;
    s.insert(3,"apple",3);
    cout<<s<<endl;
    s.replace(3,6,"l");
    cout<<s<<endl;
    /* s.erase();
    cout<<s;*/
    s.push_back('z');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    t="abc";
    s.swap(t);
    cout<<s<<endl<<t;


}