#include <stdio.h>
int sum(int a);
int main()
{
    int n;
    printf("enter a integer: ");
    scanf("%d", &n);
    printf("sum of digits = %d\n", sum(n));
    return 0;
}
int sum(int a)
{
    int sum = 0;
    while (a != 0)
    {
        int m = a % 10;
        sum = sum + m;
        a = a / 10;
    }
    return sum;
}