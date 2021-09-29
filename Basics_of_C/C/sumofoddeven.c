#include<stdio.h>
void main()
{
	int i,n,even_sum=0,odd_sum=0;
	printf("Enter  the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		   even_sum=even_sum+i;	
		}
		else
		{
			odd_sum=odd_sum+i;
		}
	}
	printf("sum of all even number is: %d\n",even_sum);
	printf("sum of all odd number is: %d\n",odd_sum);
	
}
