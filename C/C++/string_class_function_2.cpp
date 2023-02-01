#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="welcome", t, x;
    char str[20];
    s.copy(str,s.length());
    str[7]='\0';
    cout<<str;
    t="How are you";
    cout<<t.find("are")<<endl;
    cout<<t.find('a')<<endl;
    cout<<t.find('o')<<endl;
    cout<<t.rfind("o")<<endl;
    cout<<t.rfind("are")<<endl;
    x="Hello World";
   cout<<x.find_first_of('l' /* , starting point*/)<<endl;
   cout<<x.find_first_of('l',2)<<endl;
   cout<<x.find_first_of('l',3)<<endl;
   cout<<x.find_first_of('l',4)<<endl;
   cout<<x.find_first_of("le")<<endl;
   cout<<x.find_first_of("or")<<endl;
   cout<<x.find_last_of('l')<<endl;


}
