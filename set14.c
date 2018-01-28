#include <stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet or number: ");
    scanf("%c",&c);
	if((c>=65 && c<=90)||(c>=65&&c<=90))
	{
    printf("a alphabet"\n);
	}
    else
        printf("not a alphabet"\n);
   
}