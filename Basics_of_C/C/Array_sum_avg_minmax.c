#include  <stdio.h>
int main()
{
  int i, num,min,max,choice;
    float total = 0.0, average;
    printf ("Enter the value of N \n");
    scanf("%d", &num);
    int array[num];
    printf("Enter %d numbers (-ve, +ve and zero) \n", num);
 
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements \n");
     for (i = 0; i < num; i++)
                 {
                     printf("%+3d\n", array[i]);
                 }
    
    
    printf("1. Sum and Average\n");
 	printf("2. Min and Max\n");
 	printf("\n Your choice :? ");
    scanf("%d",&choice);
   switch(choice)
    {
      case 1:
           
            for (i = 0; i < num; i++)
                {
	                total+=array[i];
                }
                 average = total / num;
                 printf("\n Sum of all numbers =  %.2f\n", total);
                 printf("\n Average of all input numbers =  %.2f\n", average);
                 break;
      case 2:          
	            
            for(i=0; i<num; i++)
               {
                 scanf("%d",&array[i]);
               }
 
               min=max=array[0];
            for(i=1; i<num; i++)
               {
                 if(min>array[i])
	            	  min=array[i];   
	       	     if(max<array[i])
		             max=array[i];       
               }
               printf("minimum of array is : %d",min);
               printf("\nmaximum of array is : %d",max);
               break;
    
    } 
   


 

}
