#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[20]="astronomy";
    char t[20]="tro";
    cout<<strstr(s,t);
    return 0;
}