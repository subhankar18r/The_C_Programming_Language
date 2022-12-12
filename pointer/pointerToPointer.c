#include <stdio.h>

int main()
{
    float price = 22.49;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%f\n", **pptr);
    return 0;
}
