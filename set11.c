#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a>=0)
{
	if(a==0)
		printf("You entered Zero");
	else
		printf("You entered positive number");
}
else
	printf("You entered negative number");
}