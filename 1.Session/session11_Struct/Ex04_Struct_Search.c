#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    char name[30];
    char subject[10];
    float mark;
 }Student;

void displayStudent(Student sv)
{
    printf("+ Name of Student: %s\n", sv.name);
    printf("+ Subject of Student: %s\n", sv.subject);
    printf("+ Mark of Student: %.3f\n", sv.mark);
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
    }
}

void inputStudent(Student* sv)
{
    fflush(stdin);
    printf("Enter name Student: ");
    scanf("%s", &sv->name);
    printf("Enter subject Student: ");
    scanf("%s", &sv->subject);
    printf("Enter mark Student: ");
    scanf("%f", &sv->mark);
}

void seachStudentByName(Student* sv,int max, char name[30]){
    int count = 0;
    printf("\nSearch Result:\n");
    for(int i=0; i< max; i++)
    {
        if(strcmp(sv[i].name, name) == 0){
            count +=1;
            printf("Student no.%d", count);
            displayStudent(sv[i]);
        }
    }
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
    
    displayStudentTable(sv, 2);

    char name[30];
    printf("Enter name which you want to search:");
    fflush(stdin);
    scanf("%s",&name);

    seachStudentByName(sv, 2, name);

    return 0;
}