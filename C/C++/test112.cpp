#include <iostream>
using namespace std;
int main()
{
    int A[]={2,3,4,5,6,-1,34,-56};
    int Max=A[0];
    for(auto x:A)
    {
      if(x>=Max)
        Max=x;

      


    }
    cout<<Max<<endl;
    return 0;
}
