#include<stdio.h>
int main()
{
	int n, t,rev=0,rem;
	printf("Enter no");
	scanf("%d", &n);
	t=n;
	
	while(n>0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
    }

 if(t == rev)
 {
 	printf("Number is a palindrome.");
 }
 else 
 {
 	printf("Number is not palindrome.");
 }
 
return 0;
}
