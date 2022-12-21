#include <stdio.h>
#include <string.h>
typedef struct teacherData
{
    char name[100];
    char subject[100];
} td;

typedef struct studentData
{
    char name[100];
    int roll;

} sd;

int main()
{
    td teachers[100];
    sd students[100];

    strcpy(teachers[0].name, "Debashis Saha");
    strcpy(teachers[0].subject, "Physics");
    strcpy(teachers[1].name, "Manoj Saha");
    strcpy(teachers[1].subject, "Mathematics");
    strcpy(teachers[2].name, "Amit Kumar Basak");
    strcpy(teachers[2].subject, "Biology");

    strcpy(students[0].name, "Subhankar Rajbanshi");
    students[0].roll = 1;
    strcpy(students[0].name, "Kishore Mondal");
    students[1].roll = 2;

    printf("%s teacher is %s\n", teachers[0].subject, teachers[0].name);
    printf("%s's roll no. is %d\n", students[0].name, students[0].roll);

    return 0;
}