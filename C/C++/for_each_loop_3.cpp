#include <iostream>
using namespace std;
int main()
{
    char A[]={'A',66,'C',68,64};
    for (auto x:A)/* if int x:A is used the out is 65 66 67 68 64*/
    cout<<x<<endl;
    return 0;
}