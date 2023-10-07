// take a input from user and check wheter a number is a natural number or not
#include <stdio.h>

int main()
{
    int a;
    float given_number;
    printf("enter number: ");
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