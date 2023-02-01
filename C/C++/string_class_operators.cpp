/* at() is same as [] gives char present aqt specific position
front() give the first letter of string
back() give last letter of string
[] same as at
+ act as append function can add two str to form single like str1+str2
= assignment str1=str2 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2, s3;
    s1= "hi";
    s2="there";
    s2[4]='i';
    s3=s1+s2;
    cout<<s3<<endl;
    s1=s3;
    cout<<s1;
}