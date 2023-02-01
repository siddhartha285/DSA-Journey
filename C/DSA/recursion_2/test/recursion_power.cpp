#include<iostream>
using namespace std;
int pow(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    int sm=pow(a,b-1);
    return sm*a;
}
int main(){
    int a,b;
    cout<<"Enter digit";
    cin>>a;
    cout<<endl<<"Enter power"<<endl;
    cin>>b;
    int c=pow(a,b);
    cout<<c;

}