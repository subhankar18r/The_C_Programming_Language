#include <stdio.h>

int main()
{
    float a, b, c;
    printf("enter number a \n");
    scanf("%f", &a);
    printf("enter number b \n");
    scanf("%f", &b);
    printf("enter number c \n");
    scanf("%f", &c);

    printf("average is %f\n", (a + b + c) / 3);
    return 0;
}