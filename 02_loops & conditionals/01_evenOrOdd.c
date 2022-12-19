#include <stdio.h>

int main()
{
    int a;
    printf("enter\n");
    scanf("%d", &a);

    printf("%d\n", a % 2 == 0);

    return 0;
}