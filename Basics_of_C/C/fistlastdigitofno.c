#include<stdio.h>
int main()
{
    int n, sum=0, first_digit, last_digit;
    printf("Enter number = ");
    scanf("%d", &n);
    last_digit = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    first_digit = n;
    printf("first digit = %d \n", first_digit);
    printf("last digit = %d  \n", last_digit);
    return 0;
}
