#include <iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4};
    for(int &x:A)/*use &before x to make change to values in A too */
    {
        cout<<x++<<" ";
        cout<<endl;
    }
    for(int x:A)
    cout<<x<<" ";
    
    return 0;
}