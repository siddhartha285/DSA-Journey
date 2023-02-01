#include<stdio.h>
int main()
{
    char str[50];
    int len=0;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            printf("not pal");
            return 0;
        }
    }
    printf("pal");
    return 0;
}