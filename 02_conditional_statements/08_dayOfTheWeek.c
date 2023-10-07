// Write a C program that takes an integer (1-7) as input and uses a switch statement to print the corresponding day of the week (e.g., 1 for "Sunday," 2 for "Monday," etc.).

#include <stdio.h>

int main()
{
    int a;
    printf("enter a number between 1 - 7: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("sunday\n");
        break;
    case 2:
        printf("monday\n");
        break;
    case 3:
        printf("tuesday\n");
        break;
    case 4:
        printf("wednesday\n");
        break;
    case 5:
        printf("thursday\n");
        break;
    case 6:
        printf("friday\n");
        break;
    case 7:
        printf("saturday\n");
        break;

    default:
        printf("a week has only seven day\n");
        break;
    }
    return 0;
}