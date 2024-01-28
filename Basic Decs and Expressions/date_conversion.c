#include <stdio.h>

/*
Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/

int main()
{
    int days, weeks, years;
    // int * ptr_days;

    printf("Enter any number of days: ");
    scanf("%d", &days);

    // days = 1329; 
    // weeks = (days / 52);
    weeks = (days % 365) / 7;
    years = days / 365;
    days = days - ((years*365) + (weeks*7)); // Calculate remaining days

    printf("Days: %d \n", days);
    printf("Weeks: %d \n", weeks);
    printf("Years: %d", years);
    return 0;
}