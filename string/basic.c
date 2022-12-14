#include <stdio.h>

void printString(char str[]);

int main()
{

    // char name[50];
    // gets(name); // old and dangerous method
    // fgets(name, 50, stdin); //for input multiword strings
    // printf("your name is ");
    // puts(name); //for output multiword strings

    // char str[] = "Rahul";
    //  str = "subhankar"; //character array's are not chageable
    // not working

    // char *str = "Rahul";
    // str = "Subhankar";
    // working

    // char *str;
    // fgets(str, 20, stdin);
    // puts(str);
    // not working

    return 0;
}

void printString(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}