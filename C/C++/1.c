#include<stdio.h>
#include<math.h>
int main()
{
     float a,b,c,d,e,f,g,h,z,i,j,k,l,m;
     printf("Enter value of a");
     scanf("%f", &a);
     printf("Enter value of b");
     scanf("%f", &b);
     printf("Enter value of c");
     scanf("%f", &c);
     d=a*a;
     e=b*b;
     z=c*(0.01745);
     f=cos(z);
     m=sin(z);
     g=2*a*b*f;
     i=d+e+g;
     h=sqrt(i);
     printf("The resultant is:  %f", h);
     printf(" km \n");
     j=(b*m)/(a+(b*f));
     k=atan(j);
     l=k*57.32;
     printf("The angle made by resulatant with x axis is: %f",l);
     printf(" degree");

    return 0;
}