#include <stdio.h>
#include<stdlib.h>
 
int main()
{
 
    char str[100];
    int i,j,x,len1;
 
    printf("Write: ");
    gets(str);
     
    for(x=0; str[x]!='\0'; x++);
 
    len1=0;

    for(i=0; i<(x-len1);)
    {
        if(str[i]==str[i+1])
        {
            for(j=i;j<(x-len1);j++)
                str[j]=str[j+1];
            len1++;
        }
        else
        {
            i++;
        }
    }
 
    printf("String after removing characaters: %s\n",str);
 
    return 0;
}