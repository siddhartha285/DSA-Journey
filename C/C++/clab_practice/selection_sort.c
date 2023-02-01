#include<stdio.h>
int main()
{
    int n,a[100],pos,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[pos])
            {
                pos=j;
            }
        }
        if(pos!=i)
        {
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}