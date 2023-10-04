// find the smaller number only using arithmetic and relational operator
#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    int smaller = (a < b) * a + (b < a) * b;

    printf("smaller number is : %d\n", smaller);
    return 0;
}