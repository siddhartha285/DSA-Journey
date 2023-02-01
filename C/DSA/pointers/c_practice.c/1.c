#include<stdio.h>
void swap(int *p,int *q);
int main()
{
    int a=10;
    int b=20;
    
    swap(&a,&b);
    printf("Value after changing: %d %d",a,b);
    return 0;
}
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}