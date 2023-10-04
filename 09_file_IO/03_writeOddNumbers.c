// write all odd numbers from 1 to n in a file

#include <stdio.h>

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    FILE *fptr;

    fptr = fopen("file.txt", "w");

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);

    return 0;
}