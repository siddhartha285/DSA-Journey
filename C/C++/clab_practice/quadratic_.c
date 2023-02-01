#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2;
    float real,img;
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        r1=(-b)/(2*a);
        r2=(-b)/(2*a);
        printf("%.1f %.1f",r1,r2);
    }
    if(d>0)
    {
         r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("%.1f %.1f",r1,r2);
    }
       if(d<0)
    {
         real=(-b)/(2.0*a);
        img=(sqrt(-d))/(2.0*a);
        printf("%.2f + %.2f",real,img);
    }
}