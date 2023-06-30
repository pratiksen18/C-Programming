/*C program to print all prime numbers between 1 to n
-------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int i, j, end, isPrime, sum=0; // isPrime is used as flag variable

    /* Input upper limit to print prime */
    printf("Find prime numbers between 1 to : ");
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);

    /* Find all Prime numbers between 1 to end */
    for(i=2; i<=end; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1; 

        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            printf("%d, ", i);
            sum += i;
        }
    }
	printf("\nSum of all prime numbers between 1 to %d = %d", end, sum);	
    return 0;
}








/*C program to print all prime numbers between a range
-------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int i, j, start, end;
    int isPrime, sum=0;

    /* Input upper and lower limit to print prime */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All prime numbers between %d to %d are:\n", start, end);

    // Make sure that lowerlimit does not go below 2
    // Since 2 is first prime number
    if(start < 2) 
        start = 2;

    /* Find all Prime numbers between 1 to n */
    for(i=start; i<=end; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1; 

        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            printf("%d, ", i);
            sum += i;
        }
    }
	printf("Sum of all prime numbers between %d to %d = %d", start, end, sum);
    return 0;
}
