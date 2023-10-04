// 2 numbers a & b, are written in a file. Write a progaram to replace them with their sum.

#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("file.txt", "r");

    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("file.txt", "w");

    fprintf(fptr, "%d", a + b);

    fclose(fptr);

    return 0;
}