#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
printf("%d is sum if %d numbers",sum,n);	
}