#include <stdio.h>

int main()
{
    int valid = 1, a;
    float given_number;
    printf("enter number: \n");
    scanf("%f", &given_number);
    a = given_number;
    if (given_number > 0 && given_number - a == 0)
    {
        printf("the number is a natural number\n");
    }
    else
    {
        printf("the number is not a natural number\n");
    }

    return 0;
}