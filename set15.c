#include<stdio.h>
void main()
{
	int a,c,b;
	printf("Enter the three values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c)
	{
		if(a==b)
			printf("a and b are graeter\n");
		else if(a==c)
			printf("a and c are greater\n");
		else
			printf("a is greater\n");
	}
	else if(b>=c)
	{
		if(b==c)
			printf("b and c are greater\n");
		else
			printf("b is greater\n");
	}
	else
		printf("c is greater\n");
}