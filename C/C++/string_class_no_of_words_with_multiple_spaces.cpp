#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="hey fad fgs        rupali pakad EAFze  hsggus dzsz  fdddfg  sfgs jahsh hghjsghja   ";
    int count=0;
    cout<<s[s.length()];
 
    for(int i=0;s[i]!='\0';i++)
    {
        char a=s[i];
        char b=s[i+1];
        if (a==' ' && b==' ')
        {
            continue;
        }
        else if (a!=' '&& b==' ')
        {
           count++; /* code */
        }
        else if (a==' ' && b!=' ')
        {
            continue;
        }
        else if( a==' ' && b=='\0')
        {
            count=count-1;
        }
        else
        {
            continue;
        }
        }
        
        

    
    cout<<count+1;
}