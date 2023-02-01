#include<stdio.h>
int main()
{
    char c;
    int a,b;
    scanf("%d %c %d",&a,&c,&b);
    switch(c)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b==0)
        {
            printf("error");
        }
        else
        printf("%.2f",(float )a/b);
        break;
        case '%':
        printf("%d",a%b);
        break;
        default:
        printf("error");
        

    }
    return 0;

}