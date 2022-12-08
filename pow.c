#include <stdio.h>

int power(int number, int power);

int main()
{
    printf("%d\n", power(12, 2));
    return 0;
}

int power(int number, int power)
{
    int res = 1;
    for (int i = power; i >= 1; i--)
    {
        res *= number;
    }
    return res;
}