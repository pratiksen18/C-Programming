/*C program to find power of any number
-----------------------------------------*/

#include <stdio.h>
#include <math.h> // Used for pow() function

int main()
{
    double base, expo, power;

    /* Input two numbers from user */
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &expo);

    /* Calculates base^expo */
    power = pow(base, expo);

    printf("%.2lf ^ %.2lf = %.2lf", base, expo, power);

    return 0;
}





/*C program to find square root of a number
--------------------------------------------*/

#include <stdio.h>
#include <math.h>
int main()
{
    double num, root;

    /* Input a number from user */
    printf("Enter any number to find square root: ");
    scanf("%lf", &num);

    /* Calculate square root of num */
    root = sqrt(num);

    /* Print the resultant value */
    printf("Square root of %.2lf = %.2lf", num, root);

    return 0;
}
