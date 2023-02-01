#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    char choice;
    s="Hello";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(50);
    cout<<s.capacity()<<endl;
    cout<<s.max_size()<<endl;
    cout<<"enter your choice for clear";
    cin>>choice;
    switch (choice)
    {
    case 'y':
    s.clear();
    cout<<s<<endl;
    break;
    case 'n':
    cout<<s<<endl;
        break;
    
    default:
    cout<<"no";
        break;
    }
    if(s.empty())
    cout<<"empty"<<endl;
    else
    cout<<s<<endl;


    

}