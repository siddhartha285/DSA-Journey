#include<iostream>
using namespace std;
int main()
{
    char s[20];
    int i,n=0;
    cin>>s;
    
    for(i=0;s[i]!='\0';i++)
    {
        n++;
    }
    int x=0;
    while(x<n-1)
    {
        if(s[x]==s[n-1])
        {
            x++;
            n--;
        }
        else
        {
            cout<<"not palindrone";
            return 0;
        }

    }
    cout<<"palindrome";
}