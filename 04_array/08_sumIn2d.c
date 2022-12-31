#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {3, 4, 2},
        {5, 3, 7},
        {4, 8, 2}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("sum of all elements is %d\n", sum);
    return 0;
}