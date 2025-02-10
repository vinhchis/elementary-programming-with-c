#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[30];
    char subject[10];
    float mark;
} Student;

void displayStudent(Student sv)
{
    printf("+ Name of Student: %s\n", sv.name);
    printf("+ Subject of Student: %s\n", sv.subject);
    printf("+ Mark of Student: %.3f\n", sv.mark);
}

void displayStudentTable(Student* sv, int max)
{
    printf("Student List Information:\n");
    printf("No");
    printf(" ");
    printf("%9c");
    printf("Name");
    printf("%8c");
    printf(" ");
    printf("Subject");
    printf(" ");
    printf(" Mark ");
    printf(" ");
    printf("Pass\n");
    printf("--|---------------------|--------|-----|-------\n"); // No Name Subject Mark Pass

    for (int i = 0; i < max; i++)
    {
        printf("%02d", i + 1);
        printf(" ");
        printf(" %-20s", sv[i].name);
        printf(" ");
        printf("%4s    ", sv[i].subject);
        printf(" ");
        printf("%5.1f", sv[i].mark);
        printf(" ");
        if (sv[i].mark >= 40)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
        // printf("%-6d\n", amount);
    }
}

void inputStudent(Student *sv)
{
    fflush(stdin);
    printf("Enter name Student: ");
    scanf("%s", &sv->name);
    printf("Enter subject Student: ");
    scanf("%s", &sv->subject);
    printf("Enter mark Student: ");
    scanf("%f", &sv->mark);
}

int main()
{
    int max = 2;
    Student sv[max];

    for (int i = 0; i < max; i++)
    {
        printf("input student no.%02d\n", i + 1);
        inputStudent(&sv[i]);
    }

    displayStudentTable(sv, 2);

    return 0;
}