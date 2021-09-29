#include<stdio.h>
void main()
{
	float bs,da,hra,gross;
	printf("Enter the basic salary:\n");
	scanf("%f",&bs);
	if(bs<=10000)
	{
		da=(bs*80)/100;
		hra=(bs*20)/100;
	}
	else if(bs<=20000)
	{
		da=(bs*90)/100;
		hra=(bs*25)/100;
	}
	else if(bs>20000)
	{  
		da=(bs*95)/100;
		hra=(bs*30)/100;
	}
	gross=bs+da+hra;
	printf("Gross salary is :%f",gross);

}


 
