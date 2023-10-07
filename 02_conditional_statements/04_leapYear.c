// Write a C program to determine if a given year is a leap year. Leap years are divisible by 4, except for those divisible by 100 but not by 400.

#include <stdio.h>

int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("this is a leap year\n");
    }
    else
    {
        printf("it is not a leap year.\n");
    }

    return 0;
}