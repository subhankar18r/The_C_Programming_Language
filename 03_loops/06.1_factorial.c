#include <stdio.h>

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("factorial of %d is %d\n", n, product);

    return 0;
}