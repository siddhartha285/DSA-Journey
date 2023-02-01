#include<iostream>

using namespace std;
int powr(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    int sm=powr(x,y-1);
    return sm*x;
}
int subs(string s,string output[])
{
    if(s.empty())
    {
       
        return 1;
    }
    string p=s.substr(1);
    int sm=subs(p,output);
    for(int i=0;i<sm;i++)
    {
        output[i+sm]=s[0]+output[i];
    }
    return 2*sm;

}
int main()
{
    string s;
    cout<<"Enter a string";
    cin>>s;
    int count =0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    string *output=new string[powr(2,count)];
    int count2=subs(s,output);
    for(int i=0;i<count2;i++)
    {
        cout<<output[i]<<endl;
    }
    

}