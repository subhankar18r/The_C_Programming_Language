#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    printf("enter password: ");
    scanf("%s", password);

    char salt[] = "123";

    char newPassword[200];

    strcpy(newPassword, password);
    strcat(newPassword, salt);

    printf("new password is %s\n", newPassword);
    return 0;
}