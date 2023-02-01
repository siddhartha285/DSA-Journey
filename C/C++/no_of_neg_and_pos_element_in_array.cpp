#include <iostream>
using namespace std;
int main()
{
    int x,y,z,i;
    int A[9]={-9,1,2,3,4,-4,6,-9,-6};
    z=0;
    y=0;
    for (int x:A)
    {
        if (x<0)
            z=z+1;
        else
            y=y+1;
    }
   
    cout<<z<<endl;
    cout<<y<<endl;
 
    return 0;
}