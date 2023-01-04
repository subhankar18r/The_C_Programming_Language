#include <stdio.h>

int main()
{

    int *ptr;
    int a = 2;
    ptr = &a;

    printf("%d\n", *ptr);
    printf("%d\n", a);

    printf("addres of a is %u\n", &a);
    printf("addres of a is %u\n", ptr);

    int **pptr;
    pptr = &ptr;

    printf("%d\n", **pptr);
    return 0;
}