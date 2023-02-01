#include <iostream>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter elements for first matrix:"<<"["<<i<<"]"<<"["<<j<<"]";
            cin>>A[i][j];

        }
    }
    cout<<endl;
            cout<<"The first matrix is:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";

        }
        cout<<endl;
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter elements for second matrix:"<<"["<<i<<"]"<<"["<<j<<"]";
            cin>>B[i][j];

        }
    }
    cout<<endl;
    cout<<"The second matrix is:";
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<B[i][j]<<" ";

        }
        cout<<endl;

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int sum=0;
            for(k=0;k<3;k++)
            {
            sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
            }

        }
    }
    cout<<endl;
    cout<<"Result of multiplication:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}