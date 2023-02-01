#include<iostream>
using namespace std;
#include<stack>
#include<string.h>
bool balanced(string exp)
{
    stack<char> s;
    int i=0;

    while(exp[i]!='\0')
    {
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(exp[j]=='('||exp[j]=='{'||exp[j]=='[')
        {
            s.push(exp[i]);

        }
    }
}
int main() 
{
    string input;
    cin >> input;
    cout << ((balanced(input)) ? "true" : "false");

}