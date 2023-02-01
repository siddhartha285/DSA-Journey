#include<stdio.h>
int main()
{
    int a[100],n,key;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("nor present");
    return 0;
}