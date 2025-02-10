#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[20];
    char class[4];
    float mark;
} Student;

typedef struct
{
    Student *elements;
    int size;
} StudentList;

StudentList createStudentList(int n){
    StudentList newList;
    newList.elements = (Student*)malloc(n * sizeof(Student));
    newList.size = n;
    return newList;
}

void setValue(StudentList* students, int index, Student book){
    if(index < students->size && index >= 0){
        students->elements[index] = book;
    }else {
        printf("Index out of bound.\n");
    }
}

Student getValue(StudentList* students, int index){
    if(index < students->size && index >= 0){
        return students->elements[index];
    }else {
        printf("Index out of bound.\n");
    }
}

void inputStudentList(StudentList* students)
{
    Student student;

    printf("Input information of a Student: \n");
    for(int i=0; i < students->size; i++){
        printf("\nEnter student no.%02d : \n", i + 1);

        _flushall();
        printf("\tEnter Student's name: ");
        gets(student.name);
        printf("\tEnter Student's class: ");
        gets(student.class);
        printf("\tEnter Student's mark: ");
        scanf("%f", &student.mark);

        setValue(students, i, student);
    }
}

void displayStudent(Student student)
{
    printf("|%20s|%4s|%5.2f|\n", student.name, student.class, student.mark);
}

void displayStudentList(StudentList students){
    printf("List Students Information: \n");
    for(int i=0; i < students.size; i++){
        printf("|no.%02d",i+1);
        displayStudent(students.elements[i]);
    }
}

void searchStudentsByName(StudentList students, char name[20]){
    printf("\nSearch Result:\n");
    for(int i=0; i< students.size; i++)
    {
        if(strcmp(students.elements[i].name, name) == 0){
            displayStudent(students.elements[i]);
        }
    }
}

void searchStudentsByClass(StudentList students, char class[4]){
    printf("\nSearch Result:\n");
    for(int i=0; i< students.size; i++)
    {
        if(strcmp(students.elements[i].class, class) == 0){
            displayStudent(students.elements[i]);
        }
    }
}

void seachStudents(StudentList students){
    int sb;
    char name[20], class[4];

    printf("\n---------Search Students----------------");
    printf("\n\t1. Search by Name");
    printf("\n\t2. Search by Class");
    printf("\n\tEnter Choice: ");
    scanf("%d", &sb);
    _flushall();

    switch (sb)
    {
        case 1:
            printf("Input student name: ");
            gets(name);
            searchStudentsByName(students, name);
            break;
        case 2:
            printf("Input student name: ");
            gets(class);
            searchStudentsByName(students, class);
    }
}

void updateStudent(StudentList *students){
    char name[20];

    printf("\n-------Update Student--------\n");
    printf("Input student name: ");
    gets(name);

    for(int i=0; i< students->size; i++)
    {
        if(strcmp(students->elements[i].name, name) == 0){
            _flushall();
            printf("\tEnter Student's class: ");
            gets(students->elements[i].class);
            printf("\tEnter Student's mark: ");
            scanf("%f", &students->elements->mark);
        }
    }
}

void sortStudentsAscending(StudentList *students){
    Student temp;
    Student student = students->elements[0];
    for (int i = 0; i < students->size - 1; i++)
    {
        for(int j = i + 1; j < students->size;j++){
            if(strcmp(students->elements[i].name, students->elements[j].name) > 0){
                temp = students->elements[i];
                students->elements[i]  = students->elements[j];
                students->elements[j]  = temp;
            } 
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

    // seachStudents(students);
    // updateStudent(&students);
    // displayStudentList(students);

    sortStudentsAscending(&students);
    printf("After Sorting Asceding Students\n");
    displayStudentList(students);

    
    getch();
    return 0;
}