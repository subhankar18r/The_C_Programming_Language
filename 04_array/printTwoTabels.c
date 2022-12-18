#include <stdio.h>

void storeTabel(int arr[][10], int n, int m, int number);

int main()
{
    int tabels[2][10];
    storeTabel(tabels, 0, 10, 2);
    storeTabel(tabels, 1, 10, 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tabels[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tabels[1][i]);
    }

    return 0;
}
void storeTabel(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
    printf("\n");
}