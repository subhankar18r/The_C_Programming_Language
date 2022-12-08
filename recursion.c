#include <stdio.h>

void printHello(int count);
int sum(int n);
int factorial(int n);

int main()
{

    return 0;
}

void printHello(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello\n");
    printHello(count - 1);
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
    return sumN;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int facNm1 = factorial(n - 1);

    int fac = facNm1 * n;

    return fac;
}
