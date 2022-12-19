#include <stdio.h>

typedef struct vector
{
    int x;
    int y;

} vector;

void calcSum(vector v1, vector v2, vector sum);

int main()
{
    vector v1 = {4, 8};
    vector v2 = {3, 9};

    vector sum = {0};

    calcSum(v1, v2, sum);
    return 0;
}

void calcSum(vector v1, vector v2, vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of two vector is %di + %dj\n", sum.x, sum.y);
}