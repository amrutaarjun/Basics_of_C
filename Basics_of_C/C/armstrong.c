#include<stdio.h>
void main()
{
	int n ,r,temp=0,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("The entered no is armstrong number.");
	}
	else
	{
		printf("The entered no is not a armstrong number.");
	}
	
}
