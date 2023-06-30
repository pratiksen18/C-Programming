/*C program to find HCF of two numbers
---------------------------------------*/

#include <stdio.h>

int main()
{
    int i, num1, num2, min, hcf=1;

    /* Input two numbers from user */
    printf("Enter any two numbers to find HCF:\n ");
    scanf("%d%d", &num1, &num2);

    /* Find minimum between two numbers */
    if(num1 > num2)
        {
            min = num2;
        }
        else
        {
            min = num1;
        }

    for(i=1; i<=min; i++)
    {
        /* If i is factor of both number */
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}
