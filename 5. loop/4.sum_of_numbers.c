/*C program to find sum of natural numbers in given range
----------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int i, start, end, sum=0;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    /* Find sum of all numbers */
    for(i=start; i<=end; i++)
    {
        sum += i;
    }

    printf("Sum of natural numbers from %d to %d = %d", start, end, sum);

    return 0;
}
