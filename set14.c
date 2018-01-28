#include <stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet or number: ");
    scanf("%c",&c);
	if((c>=65 && c<=90)||(c>=65&&c<=90))
	{
    printf("%c is a alphabet.", c);
	}
    else
        printf("%c is not a alphabet.", c);
   
}