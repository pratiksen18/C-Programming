/* C program to print sum of all even numbers in given range
-------------------------------------------------------------*/

#include <stdio.h>
int main()
{
    int i, start, end, sum=0;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    for(i=start; i<=end; i++)
    {
        if(i%2==0)
    	{
        	sum += i;
    		
		}    
    }
    printf("Sum of all even number between %d to %d = %d", start, end, sum);
    return 0;
}







/*C program to print sum of all even numbers in given range
------------------------------------------------------------*/

#include <stdio.h>
int main()
{
    int i, start, end, sum=0;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    for(i=start; i<=end; i++)
    {
        if(i%2!=0)
    	{
        	sum += i;
    		
		}   
    }
    printf("Sum of all even number between %d to %d = %d", start, end, sum);
    return 0;
}
