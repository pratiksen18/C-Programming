/*C program to check even or odd number using conditional operator
-------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    /* Print Even if (num%2==0) */
    printf("The number is %s", (num%2==0 ? "EVEN" : "ODD"));

    return 0;
}
