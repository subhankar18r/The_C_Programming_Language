#include <stdio.h>

int sum(int a);
int dec(int a);

int main()
{
    int given_number;
    printf("enter number: ");
    scanf("%d", &given_number);
    printf("sum is %d\n", sum(given_number));

    return 0;
}

int sum(int a)
{
    int sum = 0, i = dec(a);
    do
    {
        int b = a / i;
        sum += b;
        a -= b * i;
        i /= 10;
    } while (i != 0);

    return sum;
}

int dec(int a)
{
    int i = 1;

    while (a != 0)
    {
        a /= 10;
        i *= 10;
    }

    return i / 10;
}