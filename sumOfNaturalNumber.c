#include <stdio.h>

int main()
{
    int a;
    printf("enter a natural number: ");
    scanf("%d", &a);

    int sum = 0;

    for (int i = 1, j = a; i <= a; i++, j--)
    {
        printf("%d\n", j);
        sum += i;
    }

    printf("%d\n", sum);
    // for (int i = a; i >= 1; i--)
    // {
    //     sum += i;
    //     printf("%d\n", i);
    // }

    return 0;
}