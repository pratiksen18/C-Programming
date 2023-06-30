/*C program to print all natural numbers from 1 to n using while loop
----------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
    int i, end;

    /*
     * Input a number from user
     */
    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &end);

    /*
     * Print natural numbers from 1 to end
     */
    i=1;
    while(i<=end)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}





/*C program to print all natural numbers in range
--------------------------------------------------*/

#include <stdio.h>
int main()
{
    int i, start, end;

    /* Input start and end limit */
    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    printf("Natural numbers from %d to %d : \n", start, end);

    /*
     * Start loop counter from start (i=start) and go till 
     * end (i<=end), increment the loop count by 1 to get 
     * the next value. For each repetition print the value of i.
     */
    for(i=start; i<=end; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
