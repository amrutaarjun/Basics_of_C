#include<stdio.h>
void main()
{
	char num;
	printf("Enter the letter:\n");
	scanf("%d",&num);

	if(num>='a'&& num<='z')
	{
		num=num-32;
		printf("%c\n",num);
	}
	else if(num>='A'&& num<='Z')
	{
		num=num+32;
		printf("%c\n",num);
	}
}
