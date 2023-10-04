// Create a C program that checks if a given integer is even or odd.Print "Even" or "Odd" accordingly.
#include <stdio.h>

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("you entered a even number\n");
    }
    else
    {
        printf("you entered a odd number\n");
    }

    return 0;
}