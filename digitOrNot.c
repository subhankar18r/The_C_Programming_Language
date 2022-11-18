#include <stdio.h>

int main()
{
    char a;

    printf("enter character\n");
    scanf("%c", &a);

    printf("1 for digit, 0 for not a digit : %d\n", a >= '0' && a <= '9');

    return 0;
}