#include<iostream>
using namespace std;
int rev(int a)
{
    if(a/10==0)
    {
        return 1;
    }
    int sm=rev(a/10);
    return sm+1;

}
int main()
{
    cout<<"Enter the number:";
    int n;
    cin>>n;
    cout<<rev(n);
}