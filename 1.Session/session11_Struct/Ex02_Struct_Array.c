#include <stdio.h>
#include <stdlib.h>

/*
    40 là đậu
*/

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

void inputStudent(Student *sv)
{
    fflush(stdin);
    printf("Enter name Student: ");
    scanf("%s",&sv->name);
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

    printf("Information of all Students\n");
    for (int i = 0; i < max; i++)
    {
        printf("Student no.%02d\n", i + 1);
        displayStudent(sv[i]);
        if (sv[i].mark >= 40)
        {
            printf("\t+ Pass\n");
        }
        else
        {
            printf("\t+ Fail\n");
        }
    }

    return 0;
}