#include<stdio.h>
void main()
{
	int n;
	printf("\n Enter any value:");
	scanf("%d",&n);
    printf("List of natural number in reverse order:\n");
	while(n>=1)
	{
		printf("%d\t",n);
		n--;
		
	}

}
