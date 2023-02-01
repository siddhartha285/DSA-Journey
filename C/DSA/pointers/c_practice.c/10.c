#include<stdio.h>
#include<string.h>
int main()
    {
        char s[10];
        int i=0;
        
      
        scanf("%s",s);
        printf("%s",s);
        int k=strlen(s);
          printf("%d",k);
        while(s[i]!='\0')
        {
            i++;

        }
        for(int j=0;j<i/2;j++)
        {
            if(s[j]!=s[i-j-1])
            {
                printf("not palindrome");
                return 0;
            }
        }
        printf("palindrome");
        return 0;

    }
