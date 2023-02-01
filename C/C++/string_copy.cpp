#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[50]="hello";
    char t[50];
    strcpy(t,s);
    cout<<t;/* use strncpy to copy specific n no of letters only*/
    return 0;

}