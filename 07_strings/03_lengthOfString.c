#include <stdio.h>
#include <string.h>

int len(char str[]);

int main()
{
    // char name[] = "subhankar";
    char name[100];
    fgets(name, 100, stdin);

    // int lenght = len(name);
    int lenght = strlen(name);
    printf("lenth of the string is %d\n", lenght);

    return 0;
}
int len(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}