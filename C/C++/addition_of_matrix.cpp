#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int A[2][3]={{1,2,3},{4,5,6}};
    int B[2][3]={{1,2,3},{4,5,6}};
    int C[2][3];
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];

        }
    }
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}