#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 5, 4, 7, 9, 6, 5, 4, 25, 45, 12};
    int max = arr[0];

    for (int i = 0; i < 12; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            printf("%d\n", max);
        }
    }
    printf("largest number is %d\n", max);

    return 0;
}