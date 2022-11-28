#include <stdio.h>

int main()
{
    int given_number;
    printf("enter number\n");
    scanf("%d", &given_number);

    for (int i = 10; i > 0; i--)
    {
        printf("%d * %d = %d\n", given_number, i, given_number * i);
    }

    return 0;
}