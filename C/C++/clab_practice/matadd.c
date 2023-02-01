#include<stdio.h>
int main()
{
    int m,n,a1[100][100],a2[100][100],a3[100][100];
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("\n");
      for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a1[i][j]);
        }
        printf("\n");
    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a2[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           a3[i][j]=a1[i][j]+a2[i][j];
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }
return 0;
    

}