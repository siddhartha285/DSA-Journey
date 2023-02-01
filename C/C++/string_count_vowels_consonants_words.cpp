#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="how many words";
    int count1=0;
    int count2=0;
    int count3=0;
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        if(*it=='a' || *it=='e' || *it=='i' || *it=='o' || *it=='u' || *it=='A' || *it=='E' || *it=='I' || *it=='O' || *it=='U' )
        {
            count1++;
        }
        else if(*it==' ')
        {
            count2++;
        }
        else
        {
            count3++;
        }
        

    }
    
    cout<<"vowels: "<<count1<<endl;
    cout<<"consonents: "<<count3<<endl;
    cout<<"words: "<<count2+1<<endl;
}