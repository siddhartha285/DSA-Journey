#include <iostream>
using namespace std;
int main()
{
    char s[1000];
    cin.getline(s,1000);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            continue;

        }
        s[i]=s[i]-32;
    }
    cout<<s;

}
