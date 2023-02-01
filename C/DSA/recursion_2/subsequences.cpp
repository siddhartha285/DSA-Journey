#include<iostream>
using namespace std;
void subs(string input,string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }
    subs(input.substr(1),output);
    subs(input.substr(1),output+input[0]);

}
int main()
{
    string s;
    cout<<"enter a string:";
    cin>>s;
    string output="";
    subs(s,output);
    return 0;
}