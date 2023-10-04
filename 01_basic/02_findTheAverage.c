// take three numbers and calculate the average of three numbers

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
    float average = (a + b + c) / 3;
    printf("average is %f\n", average);
    return 0;
}