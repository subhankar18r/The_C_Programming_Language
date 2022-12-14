// input string by using %c

#include <stdio.h>

int main()
{
    char str[10], ch;

    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0;
}