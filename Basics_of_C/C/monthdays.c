#include<stdio.h>
void main()
{
	int monthnum;
	printf("Enter a month number:\n");
	scanf("%d",&monthnum);
	if(monthnum==1)
	{
		printf("number of days 30");
	}
	else if(monthnum==2)
	{
		printf("number of days 29 or 28");
	}
	else if(monthnum==3)
	{
		printf("number of days 31");
	}
	else if(monthnum==4)
	{
		printf("number of days 30"); 
	}
	else if(monthnum==5)
	{
		printf("number of days 31"); 
    }
    else if(monthnum==6)
	{
		printf("number of days 30"); 
    }
    else if(monthnum==7)
	{
		printf("number of days 31"); 
    }
    else if(monthnum==8)
	{
		printf("number of days 31"); 
    }
    else if(monthnum==9)
	{
		printf("number of days 30"); 
    }
    else if(monthnum==10)
	{
		printf("number of days 31"); 
    }
    else if(monthnum==11)
	{
		printf("number of days 30"); 
    }
    else if(monthnum==12)
	{
		printf("number of days 31"); 
    }
    
}
