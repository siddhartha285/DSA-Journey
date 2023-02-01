#include <iostream>
using namespace std;
int main()
{

    char a;
    char add,sub,mul,div;
    int b,c,l,i,j,k;
    
    cout<<"Menu";
    cout<<"1:add 2:sub 3:mul 4:div"<<endl;
    cin>>b;
    cout<<"Enter b c";
    cin>>a;
    cin>>c;
    i=b+c;
    j=b-c;
    k=b*c;
    l=b/c;
    switch (a)
    {
        case '+': cout<<i;
        break;
        case '-': cout<<j;
        break;
        case '*': cout<<k;
        break;
        case '/':
        if(c==0)
        cout<<"Infinity";
        else
        cout<<l;
        break;
        default: cout<<"Invalid";

    }
    return 0;
}