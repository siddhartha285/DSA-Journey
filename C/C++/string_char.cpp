#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[20]="astronomy";

    cout<<strchr(s,'s');/*use strrchr to find char from right instead of left*/
    return 0;
}