#include<stdio.h>
int main()
{
    int a,n,m,rev=0;
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
        m=a%10;
        a=a/10;
        rev=rev*10+m;
    }
    if(rev==n)
    {
        printf("pal");
    }
    else{
        printf("npal");
    }
}