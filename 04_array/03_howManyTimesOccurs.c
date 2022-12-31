#include <stdio.h>

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int arr[] = {1, 5, 6, 2, 4, 7, 8, 9, 5, 4, 8, 6, 1, 2, 3, 5, 4, 7, 8, 9, 5, 4, 1, 2, 6, 5, 3, 2, 1, 4, 5, 9, 7, 8, 4, 5, 1, 6, 2, 5, 3, 1, 4, 7, 8};

    int count = 0;
    for (int i = 0; i < 45; i++)
    {
        if (n == arr[i])
        {
            count++;
        }
    }

    printf("%d occurs %d times.\n", n, count);

    return 0;
}