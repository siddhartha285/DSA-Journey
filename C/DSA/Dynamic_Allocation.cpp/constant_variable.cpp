#include<iostream>
using namespace std;
int main()
{
    int const p=10;
    int  const *pc=&p;
    cout<<*pc<<endl;
    (*pc)++;
    

    
    cout<<*pc;
    
    
}