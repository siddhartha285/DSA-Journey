#include <iostream>
using namespace std;
int main()
{
    float A[]={1.1f,1.2f,1.3f,2,4};
    for(float x:A)/*we can use auto x:A instead of float x:A*/
    cout<<x<<endl;
    return 0;
}