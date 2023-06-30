/*C program to convert temperature from degree celsius to fahrenheit
----------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    
    /* Input temperature in celsius */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    /* celsius to fahrenheit conversion formula */
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}




/*C program to convert temperature from degree fahrenheit to celsius
----------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    /* Input temperature in fahrenheit */
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* Fahrenheit to celsius conversion formula */
    celsius = (fahrenheit - 32) * 5 / 9;

    /* Print the value of celsius */
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    return 0;
}
