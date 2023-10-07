// Implement a C program that takes a student's score as input and assigns a grade based on the following criteria:90 -100 : A, 80 - 89 : B, 70 - 79 : C, 60 - 69 : D, Below 60 : F

#include <stdio.h>

int main()
{
    int score;
    printf("enter your score: ");
    scanf("%d", &score);
    if (score <= 100 && score >= 0)
    {
        if (score >= 90)
        {
            printf("A\n");
        }
        else if (score >= 80)
        {
            printf("B\n");
        }
        else if (score >= 70)
        {
            printf("C\n");
        }
        else if (score >= 60)
        {
            printf("D\n");
        }
        else
        {
            printf("you are fail\n");
        }
    }
    else
    {
        printf("you enter invalid score, score must be 0-100\n");
    }

    return 0;
}