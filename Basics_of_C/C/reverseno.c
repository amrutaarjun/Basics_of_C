#include<stdio.h>
void main()
{
	int n, y,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
	y=n%10;
	rev=(rev*10)+y;
    n=n/10;
	}
	printf("The reverse number is:%d\n",rev);
	 
}
