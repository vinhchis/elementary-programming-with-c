#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
    40 là đậu
*/

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
    
    
    printf("\nInformation of all Students\n");
    for (int  i = 0; i < max; i++)
    {   
        printf("\nStudent no.%02d", i + 1);
        displayStudent(sv[i]);
        if(sv[i].mark >= 40){
            printf("\n+ Pass");
        }else{
            printf("\n+ Fail");
        } 
    }
    


    getch();
    return 0;
}