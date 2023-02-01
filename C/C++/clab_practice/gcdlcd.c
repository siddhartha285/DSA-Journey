#include<stdio.h>
int main()
{
    int a,b,c,d;
    int gcd,lcd;
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    printf("%d\n",a);
    lcd=(c*d)/a;
    printf("%d",lcd);

}