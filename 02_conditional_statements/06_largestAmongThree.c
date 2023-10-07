// Create a C program that takes three integers as input and finds the maximum of the three using if - else statements.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is largest\n", a);
        }
        else
        {
            printf("%d is largest\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is largest\n", b);
        }
        else
        {
            printf("%d is largest\n", c);
        }
    }
    return 0;
}