#include<stdio.h>
void main()
{
	int na[100],n,i,k,sum=0;
	printf("Enter n and k; \n");
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		scanf("%d",&na[i]);
	for(i=1;i<=k;i++)
		sum=sum+na[i];
	
printf("sum %d",sum);
}