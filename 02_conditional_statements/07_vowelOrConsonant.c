// Write a C program that takes a character as input and checks if it's a vowel (a, e, i, o, u) or a consonant.

#include <stdio.h>

int main()
{
    char ch;
    printf("enter a caracter: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("this is a vowel\n");
        break;
    case 'e':
    case 'E':
        printf("this is a vowel\n");

        break;
    case 'i':
    case 'I':
        printf("this is a vowel\n");
        break;
    case 'o':
    case 'O':
        printf("this is a vowel\n");
        break;
    case 'u':
    case 'U':
        printf("this is a vowel\n");
        break;

    default:
        printf("this is not a vowel\n");
        break;
    }
    return 0;
}