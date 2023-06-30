/*C program to find sum and product of its digits of a number
--------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int num, sum=0, product=1;

    /* Input a number from user */
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);

    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
		sum += num % 10;
		product = product * (num % 10);
        /* Remove last digit from num */
        num = num / 10;
    }
    printf("Sum of digits = %d", sum);
    printf("\nProduct of digits = %lld", product);
    return 0;
}
