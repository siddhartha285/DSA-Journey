#include <stdio.h>
int main()
{
char s[20],i,length;
printf("Enter first string: ");
scanf("%s", s);
// calculate the length of string s1
length = 0;
while(s[length] != '\0')
{
length++;
}
printf("Length = %d", length);
return 0;
}
