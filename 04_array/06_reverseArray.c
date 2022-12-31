#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n-------\n");
    for (int i = 0; i < 4 / 2; i++)
    {
        int tempValue = arr[i];
        arr[i] = arr[4 - i - 1];
        arr[4 - i - 1] = tempValue;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}