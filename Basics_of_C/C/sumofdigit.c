#include<stdio.h>
void main()
{  
    int num;
	printf("enter a num:");
	scanf("%d",&num);
	int a,b,p,q,x,y,ans;

	a=num/10;
	//printf("%d\n",a);
	
	b=num%10;	
    //printf("%d\n",b);
	
	p=a/10;
	//printf("%d\n",p);
	
	q=a%10;
	//printf("%d\n",q);
	
	x=p/10;
	//printf("%d\n",x);
	
	y=p%10;
	//printf("%d\n",y);
	 
	 ans=b+q+x+y;
	 printf("Sum of Digit is: %d\n",ans);
		
}
