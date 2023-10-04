#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student cse[100];

    strcpy(cse[0].name, "Subhankar");
    cse[0].roll = 1;
    cse[0].cgpa = 7.3;
    strcpy(cse[1].name, "Debyendu");
    cse[1].roll = 2;
    cse[1].cgpa = 7.0;
    strcpy(cse[2].name, "Binoy");
    cse[2].roll = 3;
    cse[2].cgpa = 7.5;

    for (int i = 0; i < 3; i++)
    {
        printf("name and cgpa of roll no. %d is: %s , %.1f\n", cse[i].roll, cse[i].name, cse[i].cgpa);
    }

    return 0;
}
