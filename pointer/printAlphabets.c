#include <stdio.h>

int main()
{
    char alph[27];
    char *ptr;
    ptr = alph;

    int i;
    for (i = 0; i < 26; i++)
    {
        *ptr = i + 'A';
        ptr++;
    }

    ptr = alph;

    for (i = 0; i < 26; i++)
    {
        printf("%c ", *ptr);
        ptr++;
    }

    return (0);
}
