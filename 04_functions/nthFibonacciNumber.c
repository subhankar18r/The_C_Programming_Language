// print the nth term of fibonacci numbers

#include <stdio.h>

int fib(int a);
int fibf(int n);

int main()
{
    int a = 8;
    printf("the %dth of fibonacci number is %d\n", a, fib(a));

    return 0;
}

int fib(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }

    int prevN = fib(a - 1) + fib(a - 2);

    return prevN;
}

int fibf(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int new, cur = 1, prev = 0;
    for (int i = 3; i <= n; i++)
    {
        new = cur + prev;
        prev = cur;
        cur = new;
    }

    return new;
}