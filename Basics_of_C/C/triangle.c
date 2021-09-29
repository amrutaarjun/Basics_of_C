#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,sum;
	
	printf("enter three angles:\n");
	scanf("%d%d%d", &angle1, &angle2, &angle3);
	sum= angle1+angle2+angle3;
	printf("triangle of sum is: %d\n",sum);
	
	if(sum == 180)
	{
		printf("Triangle is valid");
	}
	else
	{
		printf("Traingle is not valid");
	}
	return 0;
}
