#include<stdio.h>
void main()
{
	int a,c,b;
	printf("Enter the three values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is greater");
	}
	else if(b>c)
		printf("b s greater");
	else
		printf("c is greater");
}