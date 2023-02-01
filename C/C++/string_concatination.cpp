#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
   
    char s[50];
    char t[50];
    cout<<"Enter string:";
    cin.getline(s,50);
    cout<<"Enter second string:";
    cin.getline(t,50);
    strcat(s,t);
    cout<<s;
    cout<<endl;
    /* it will join source t letters to destination s*/
    /* if want to join some specific letters then use strncat n means no of letters then fuction becomes strncat(des,sor,n)*/
    cout<<"Enter digits to concatinate";
    cin>>n;
    strncat(s,t,n);
    cout<<s;
    return 0;
}