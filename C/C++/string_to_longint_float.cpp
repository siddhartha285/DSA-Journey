#include <iostream>
using namespace std;
int main()
{
    char s[20]="2030";
    char t[30]="57.25";

    long int a=strtol(s,NULL,10);
    float b=strtof(t,NULL);

    cout<<a<<endl<<b;
    return 0;
}