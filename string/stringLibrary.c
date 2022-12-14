#include <stdio.h>
#include <string.h>

int main()
{

    char name[] = "Rahul";
    char str[] = "replaced";
    char dum[] = "Dummy";

    printf("length of the string is %d\n", (int)strlen(name));

    printf("the new string replaced by %s\n", strcpy(str, name));

    printf("concatenate two strings %s\n", strcat(name, str));

    printf("compare two strings %d\n", strcmp(name, dum));
    return 0;
}