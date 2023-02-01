#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,x=0;
    gets(str);
    while(str[x]!='\0')
    {
    for(i=x+1;str[i]!='\0';i++)
    {
        
        while(str[i]==str[x])
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    x++;
    }
    printf("%s",str);
}