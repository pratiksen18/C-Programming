/*C program to swap first and last digit of a number
------------------------------------------------------*/
 
#include <stdio.h>
int main()
{
    int n, first, last, sum=0, digits, swappedNum;

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
	
	digits = log10(n);
	swappedNum = last * pow(10, digits);
    swappedNum = swappedNum + n % ((int)pow(10, digits));
    swappedNum = swappedNum - last;
    swappedNum = swappedNum + first;
	
    printf("Original number = %d", n);
    printf("\nNumber after swapping first and last digit: %d", swappedNum);
    
    return 0;
}
