#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("Character is Uppercase Character.");
	}
	else
	{
		printf("Character is Lowercase Character.");
		
	}
}
