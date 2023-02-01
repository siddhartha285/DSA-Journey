#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    int a,c;
    char ab;
	scanf("%d",&a);
	scanf("%c",&ab);
	scanf("%d",&c);
	i=a+c;
	j=a-c;
	k=a*c;
	l=a/c;
	m=a%c;

	switch(ab)
	{
	    case '+':
	    printf("The sum is %d",i);
	    break;
	    case '-':
	    printf("The difference is %d",j);
	    break;
	    case '*':
	    printf("The product is %d",k);
	    break;
	    case '/':
	    if (c==0)
	    {
	        printf("Invalid Input");
	    }
	    else
	    {
	    
	    printf("The quotient is %d",l);
	    break;
	    }
	    case '%':
	    printf("The remainder is %d",m);
	    break;
	}
	
	
	
	return 0;
}

