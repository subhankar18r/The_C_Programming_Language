#include <stdio.h>

void callByValue(int a);
void callByReference(int *a);

int main()
{
    int a = 2;

    callByValue(a);
    printf("a is %d\n", a);

    callByReference(&a);
    printf("a is %d\n", a);

    return 0;
}

void callByValue(int a)
{
    a = a * 2;
}
void callByReference(int *a)
{
    *a = *a * 2;
}