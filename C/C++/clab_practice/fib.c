#include<stdio.h>
int main()
{
    int a,prev=0,curr=1,next;
    scanf("%d",&a);
    int count=0;
    do{
        if(count<=1)
        {
            printf("%d",count);
        }
        else
        {
            next=prev+curr;
            printf("%d",next);
            prev=curr;
            curr=next;
        }
        count++;
    }
    while(count<a);

}