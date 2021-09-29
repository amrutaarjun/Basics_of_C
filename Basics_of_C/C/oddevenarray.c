#include<stdio.h>
void main()
{
	int arr[10], i,size;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	printf("Enter the element in the array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even no in the array:\n");
	
		for(i=0;i<size;i++)
		{
			if(arr[i]%2==0)
			{
				printf("%d\t",arr[i]);
			}
		}
		printf("\n");
	printf("Odd no in the array:\n");
	{
		for(i=0;i<size;i++)
		{
			if(arr[i]%2!=0)
			{
				printf("%d\t",arr[i]);
			}
		}
	}
	
	
}
