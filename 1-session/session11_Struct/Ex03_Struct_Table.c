#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct 
{
    char name[30];
    char subject[10];
    float mark;
 }Student;


void displayStudent(Student sv){
    printf("\n+ Name of Student: %s", sv.name);
    printf("\n+ Subject of Student: %s", sv.subject);
    printf("\n+ Mark of Student: %.3f", sv.mark);
}

void displayStudentTable(Student *sv, int max){
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
    printf("--|---------------------|--------|-----|-------\n");//No Name Subject Mark Pass

    for(int i = 0; i < max ; i++){
        printf("%02d", i + 1);
        printf(" ");
        printf(" %-20s", sv[i].name);
        printf(" ");
        printf("%4s    ", sv[i].subject);
        printf(" ");
        printf("%5.1f", sv[i].mark);
        printf(" ");
        if(sv[i].mark >= 40){
            printf("Pass\n");
        }else{
            printf("Fail\n");
        } 
        // printf("%-6d\n", amount);
    }
}

void inputStudent(Student *sv){
    _flushall();
    printf("Enter name Student: ");
    gets(sv->name);
    printf("Enter subject Student: ");
    gets(sv->subject);
    printf("Enter mark Student: ");
    scanf("%f", &sv->mark);
}

int main()
{
    int max = 2;
    Student sv[max];
    
    for (int  i = 0; i < max; i++)
    {
        printf("input student no.%02d\n", i + 1);
        inputStudent(&sv[i]);
    }
    

    displayStudentTable(&sv, 2);

    ////

    getch();
    return 0;
}