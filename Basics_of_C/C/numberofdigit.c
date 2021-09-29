#include<stdio.h>
void main()
{
	int n,count=0;
	printf("Enter a digit:\n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count=count+1;
	}
	printf("The total digit in number is :%d\n",count);
	
}
