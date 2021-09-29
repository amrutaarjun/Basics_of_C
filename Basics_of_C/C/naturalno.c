#include<stdio.h>
void main()
{
	int n,i=1;
	printf("\n Enter any value:");
	scanf("%d",&n);
    printf("List of natural number from 1 to %d are \n",n);
	while(i<=n)
	{
		printf("%d\t",i);
		i++;
		
	}

}
