/*C program to find first and last digit of a number and find the sum of first and last digit
----------------------------------------------------------------------------------------------*/
 
#include <stdio.h>
int main()
{
    int n, first, last, sum=0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    first = n;

    /* Remove last digit from number till only one digit is left */
    while(first >= 10)
    {
        first = first / 10;
    }
    /* Get the last digit */
	last = n % 10;
	sum = first + last;
	
    printf("First digit = %d", first);
    printf("\nLast digit = %d", last);
    printf("\nThe sum of first and last digit is %d", sum);
    return 0;
}
