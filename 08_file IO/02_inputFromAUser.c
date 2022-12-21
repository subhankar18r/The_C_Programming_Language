// take input from a user and store it in a new text file

#include <stdio.h>

int main()
{
    char name[100];
    int age;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("enter age: ");
    scanf("%d", &age);

    FILE *fptr;
    fptr = fopen("file.txt", "w");

    fprintf(fptr, "%s", name);
    fprintf(fptr, "%d", age);

    fclose(fptr);

    return 0;
}