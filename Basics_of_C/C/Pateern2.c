#include<stdio.h> 
int main()
{
    int i,j,k,rows,count,temp;
    int ch=96+26;
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    count=1;
    // using formula a+(n-1)*d
    temp=1+(rows)*2;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=count;j++)
        {
            printf(" ");   
        }
        for(k=1;k<temp/2;k++)
        {
            printf("%c",ch);
            ch--;
        }
        for(k=temp/2;k>=1;k--)
        {
            printf("%c",ch);
            if (ch<96+26) {
            ++ch;
            }

        }
        count++;
        temp-=2;
    
        printf("\n");
    }    
}