// Write a C program that takes an integer as input and prints "Positive" if it's greater than zero, "Negative" if it's less than zero, and "Zero" if it's equal to zero.
#include <stdio.h>

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("you entered a positive number\n");
    }
    else if (a < 0)
    {
        printf("you entered a negative number\n");
    }
    else
    {
        printf("you entered zero\n");
    }

    return 0;
}