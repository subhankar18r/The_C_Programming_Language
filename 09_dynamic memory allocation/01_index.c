#include <stdio.h>
#include <stdlib.h>

int main()
{

    // malloc using for allocate memory
    // int *ptr;
    // ptr = (int *)malloc(5 * sizeof(int));

    // ptr[0] = 0;
    // ptr[1] = 1;
    // ptr[2] = 2;
    // ptr[3] = 3;
    // ptr[4] = 4;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", ptr[i]);
    // }

    // CALLOC USING FOR ALLOCATE CONTINUOUS MEMORY, AND IT INITIALIZE EVERY MEMORY WITH 0
    // int *ptr;
    // ptr = (int *)calloc(5, sizeof(int));
    // ptr[0] = 0;
    // ptr[1] = 1;
    // ptr[2] = 2;
    // ptr[3] = 3;
    // ptr[4] = 4;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", ptr[i]);
    // }

    // REALLOC USING FOR REALLOCATE MEMORY ON A EXISTING POINTER, WE CAN INCREASE OR DECREASE THE MEMORY SIZE

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 2 * sizeof(int));

    ptr[5] = 5;
    ptr[6] = 6;

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // FREE FUNCTION USE FOR FREE THE MEMORY ALLOCATED DYNAMICALLY BY PROGRAMMER
    free(ptr);

    return 0;
}