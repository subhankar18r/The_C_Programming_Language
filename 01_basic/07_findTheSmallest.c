#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a: \n");
    scanf("%d", &a);
    printf("enter b: \n");
    scanf("%d", &b);

    int c = (a < b) * a + (b < a) * b;

    printf("smallest number: %d\n", c);
    return 0;
}