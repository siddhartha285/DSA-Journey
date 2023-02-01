#include<stdio.h>
int main()
{
int i, sum=0;
for(i=1;i<=10;i++)
{
if(i%2 == 0)
{
continue;
}
sum = sum+i;
}
printf("Sum of odd nos from 1-10= %d",sum);
return 0;
}
