#include <stdio.h>

int main()
{
    int given_number, modulas, temp, sum = 0;

    printf("enter a number: \n");
    scanf("%d", &given_number);
    temp = given_number;

    while (given_number > 0)
    {
        modulas = given_number % 10;
        sum += (modulas * modulas * modulas);
        given_number /= 10;
    }

    if (temp == sum)
    {
        /* code */
        printf("armstrong number\n");
    }
    else
    {
        printf("not a armstrong number\n");
    }

    return 0;
}