#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter no of rows";
    cin>>m;
    cout<<"Enter no of columns";
    cin>>n;
    int **p=new int*[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new int[i+1];
        for(int j=0;j<i+1;j++)
        {
            cin>>p[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<p[i][j]<<" ";

        }
        cout<<endl;
    }
}