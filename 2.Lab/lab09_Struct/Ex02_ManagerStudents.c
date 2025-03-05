#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    char code[4];
    float mark;
} Student;

typedef struct
{
    Student *elements;
    int size;
} StudentList;

StudentList createStudentList(int n)
{
    StudentList newList;
    newList.elements = (Student *)malloc(n * sizeof(Student));
    newList.size = n;
    return newList;
}

void setValue(StudentList *students, int index, Student book)
{
    if (index < students->size && index >= 0)
    {
        students->elements[index] = book;
    }
    else
    {
        printf("Index out of bound.\n");
    }
}

Student getValue(StudentList *students, int index)
{
    if (index < students->size && index >= 0)
    {
        return students->elements[index];
    }
    else
    {
        printf("Index out of bound.\n");
    }
}

void inputStudentList(StudentList *students)
{
    Student student;

    printf("Input information of a Student: \n");
    for (int i = 0; i < students->size; i++)
    {
        printf("\nEnter student no.%02d : \n", i + 1);

        while (getchar() != '\n' && getchar() != EOF);

        printf("\tEnter Student's name: ");
        scanf("%s", student.name);
        printf("\tEnter Student's code: ");
        scanf("%s", student.code);
        printf("\tEnter Student's mark: ");
        scanf("%f", &student.mark);

        setValue(students, i, student);
    }
}

void displayStudent(Student student)
{
    printf("|%20s|%4s|%5.2f|\n", student.name, student.code, student.mark);
}

void displayStudentList(StudentList students)
{
    for (int i = 0; i < students.size; i++)
    {
        printf("|no.%02d", i + 1);
        displayStudent(students.elements[i]);
    }
}

void searchStudentsByName(StudentList students, char name[20])
{
    printf("\nSearch Result:\n");
    for (int i = 0; i < students.size; i++)
    {
        if (strcmp(students.elements[i].name, name) == 0)
        {
            displayStudent(students.elements[i]);
        }
    }
}

void searchStudentsByClass(StudentList students, char* code)
{
    printf("\nSearch Result:\n");
    for (int i = 0; i < students.size; i++)
    {
        if (strcmp(students.elements[i].code, code) == 0)
        {
            displayStudent(students.elements[i]);
        }
    }
}

void seachStudents(StudentList students)
{
    int sb;
    char name[20], code[4];

    printf("\n---------Search Students----------------");
    printf("\n\t1. Search by Name");
    printf("\n\t2. Search by COde");
    printf("\n\tEnter Choice: ");
    scanf("%d", &sb);
    while (getchar() != '\n' && getchar() != EOF);

    switch (sb)
    {
    case 1:
        printf("Input student name: ");
        scanf("%s", name);
        searchStudentsByName(students, name);
        break;
    case 2:
        printf("Input student Code: ");
        scanf("%s", code);
        searchStudentsByName(students, code);
    }
}

void updateStudent(StudentList *students)
{
    char name[20];

    printf("\n-------Update Student--------\n");
    printf("Input student name: ");
    scanf("%s",name);

    for (int i = 0; i < students->size; i++)
    {
        if (strcmp(students->elements[i].name, name) == 0)
        {
            while (getchar() != '\n' && getchar() != EOF)
    

            printf("\tEnter Student's class: ");
            scanf("%s",students->elements[i].code);
            printf("\tEnter Student's mark: ");
            scanf("%f", &students->elements->mark);
        }
    }
}

int main()
{
    int n;
    StudentList students;

    printf("Enter number of students: ");
    scanf("%d", &n);

    students = createStudentList(n);
    inputStudentList(&students);
    displayStudentList(students);

    seachStudents(students);
    updateStudent(&students);
    displayStudentList(students);

    getchar();
    return 0;
}