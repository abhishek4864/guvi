#include <stdio.h>
void main()
{
    char c;
    int Vowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);
	if((c>=65 && c<=90)||(c>=65&&c<=90))
	{
    Vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (Vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    }
	else
		printf("Incorrect input");
}