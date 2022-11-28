#include <stdio.h>

void square()
{

    for (int i = 0; i < 4; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void rightAngledTriangle()
{
    for (int i = 0; i <= 7; i++)
    {

        for (int a = 0; a <= i; a++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

int main()
{
    square();
    rightAngledTriangle();
    return 0;
}