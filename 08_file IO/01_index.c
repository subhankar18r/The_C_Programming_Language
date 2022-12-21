#include <stdio.h>

int main()
{
    // #create a file pointer
    FILE *fptr;

    // #open a file, first parameter is file name and second parameter is the mode
    fptr = fopen("file.txt", "w");

    char c, c1;
    char string[100];

    // #check if a file is exist or not, in write mode if a file doesn't exist it will create a file with the file name you provide.
    // if (fptr == NULL)
    // {
    //     printf("file doesn't exist\n");
    // }
    // else
    // {
    //     printf("file exist\n");
    // }

    // #read data, (character)
    // fscanf(fptr, "%c", &c);
    // printf("%c\n", c);

    // #write data (string)
    // fprintf(fptr, "%s", "this is a mango");

    // #read a string using fgetc()
    // char ch;
    // ch = fgetc(fptr);

    // while (ch != EOF)
    // {
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");

    // #write a character using fputc
    // fputc('a', fptr);

    fclose(fptr);

    return 0;
}

/*
#fopen modes- 1. "r" - to read file
              2. "rb" - to read binary file
              3. "w" - to write file
              4. "wb" - to write binary file
              5. "a" - to append something to a file
*/