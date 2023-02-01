#include <iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j,k;
    int A[10][10];
    int B[10][10];
    int mult[10][10];
    cout<<"Enter r1 and c1: ";
    cin>>r1;
    cin>>c1;
    cout<<"Enter r2 nd c2: ";
    cin>>r2;
    cin>>c2;
    if(c1!=r2)
     {
        cout<<"Invalid";
        return 0;
        }
        cout<<"Enter elements for first matrix: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        cin>>A[i][j];
        }

    }
    cout<<"Enter elements for 2nd matrix: "<<endl;
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        cin>>B[i][j];
        }

    }
    cout<<"Matrix 1: "<<endl;
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        cout<<A[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
     cout<<"Matrix 2: "<<endl;
           for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        cout<<B[i][j]<<" ";
        }
        cout<<endl;

    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mult[i][j]=0;
            for(k=0;k<c1;k++)
            mult[i][j]=A[i][k]*B[k][j];

        }
    }
        cout<<"Matrix : "<<endl;
           for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
        cout<<mult[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
    

}