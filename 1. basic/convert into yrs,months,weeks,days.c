/* C program to convert days in to years, weeks and days
---------------------------------------------------------*/

#include <stdio.h>
int main()
{
    int days, years, months, weeks;

    /* Input total number of days from user */
    printf("Enter days: ");
    scanf("%d", &days);

    /* Conversion */
    years = (days / 365);   // Ignoring leap year
    months = (days % 365) / 30;
    weeks = ((days % 365) % 30) / 7;
    days  = days - ((years * 365) + (months * 30) + (weeks * 7));

    /* Print all resultant values */
    printf("YEARS: %d\n", years);
    printf("MONTH: %d\n", months);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);

    return 0;
}
