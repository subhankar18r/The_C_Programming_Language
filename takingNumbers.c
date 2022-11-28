// keep taking numbers from user until user gave a odd number

#include <stdio.h>

int main()
{
    int a;
    do
    {
        printf("enter number\n");
        scanf("%d", &a);
    } while (a % 2 == 0);

    printf("end\n");
    return 0;
}