#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct student
{
    int rollno;
    char name[50];
    char department[20];
    char course[20];
    int year_of_joining;
} student;

void compare(student s1, student s2)
{
    if (s1.department == s2.department)
    {
        printf("they both are from same department");
    }
    else
    {
        printf("they are from different department");
    }
}
int main()
{

    student s1, s2;
    s1.rollno = 20;
    strcpy(s1.name, "Subhojit");
    strcpy(s1.department, "cse");
    strcpy(s1.course, "btech");
    s1.year_of_joining = 2023;

    s2.rollno = 10;
    strcpy(s2.name, "rahul");
    strcpy(s2.department, "ece");
    strcpy(s2.course, "btech");
    s2.year_of_joining = 2023;

    compare(s1, s2);

    return 0;
}
