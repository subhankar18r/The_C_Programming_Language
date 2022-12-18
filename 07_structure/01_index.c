#include <stdio.h>
#include <string.h>

//  structure is a user defined data type, a basic structure defined below
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main()
{
    // create a new variable by structure
    struct student s1;

    // initialize structures values
    strcpy(s1.name, "Subhankar");
    s1.roll = 01;
    s1.cgpa = 7.3;

    // alternet way to initialize structures values
    struct student s2 = {"Debyendu", 2, 7.0};

    printf("name of student s1 is %s\n", s1.name);
    printf("roll of student s1 is %d\n", s1.roll);
    printf("cgpa of student s1 is %.1f\n", s1.cgpa);
    printf("\n");
    printf("name of student s2 is %s\n", s2.name);
    printf("roll of student s2 is %d\n", s2.roll);
    printf("cgpa of student s2 is %.1f\n", s2.cgpa);

    // structure to pointers
    struct student *ptr = &s1;

    printf("\nname and cgpa of roll no. %d is: %s , %.1f\n", (*ptr).roll, (*ptr).name, (*ptr).cgpa);

    // arrow operator
    printf("name and cgpa of roll no. %d is: %s , %.1f\n", ptr->roll, ptr->name, ptr->cgpa);

    // passing structure as a function argument
    printInfo(s1);

    return 0;
}

void printInfo(struct student s1)
{
    printf("name %s\n", s1.name);
    printf("roll %d\n", s1.roll);
    printf("cgpa %.1f\n", s1.cgpa);
}

/*
1. structures are stored in contiguous memory location
2. sturctures are saved us for saving to create too many variables
*/