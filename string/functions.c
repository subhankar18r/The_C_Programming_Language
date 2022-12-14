#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void slice(char str[], int n, int m);
int countVowels(char str[]);
bool isHave(char str[], char ch);

int main()
{
    char str[] = "helloWorld5";
    printf("%d\n", isHave(str, '5'));
    return 0;
}

void slice(char str[], int n, int m)
{
    char newstr[100];
    for (int i = n, j = 0; i <= m; i++, j++)
    {
        newstr[j] = str[i];
    }

    printf("%s\n", newstr);
}

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

bool isHave(char str[], char ch)
{
    bool is = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            is = 1;
        }
    }

    return is;
}