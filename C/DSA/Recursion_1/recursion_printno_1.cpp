#include<iostream>
using namespace std;
void print(int n)
{
    if(n>0)
    {
          cout<<n;
    print(n-1);
    
    cout<<n;
    }
  

}
int main()
{
    cout<<"Enter till where: ";
    
    int n;
    cin>>n;
    print(n);


}