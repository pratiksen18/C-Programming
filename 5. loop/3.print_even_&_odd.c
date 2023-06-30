/*C program to display all even numbers in given range
-------------------------------------------------------*/

#include <stdio.h>
int main()
{
    int i, start, end;

    /* Input upper and lower limit */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All even numbers from %d to %d are: \n", start, end);

    /* If 'start' is not even make it even */
    

    /*
     * Initialize loop from start and increment by 2, 
     * for each repetition
     */
    for(i=start; i<=end; i++)
    {
        /* Check even condition before printing */
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}





/*C program to display all odd numbers in given range
------------------------------------------------------*/

#include <stdio.h>
int main()
{
    int i, start, end;
    
    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All odd numbers from %d to %d are: \n", start, end);

    /* Start loop from 1 and increment it by 1 */
    for(i=start; i<=end; i++)
    {
        /* If 'i' is odd then print it */
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
