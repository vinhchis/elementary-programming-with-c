#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Student
{
    char name[30];
    char subject[10];
    float mark;
};
typedef struct Student Sv; // Thay thế:  struct Student -> Sv


void displayStudent(Sv sv){
    printf("\n+ Name of Student no.1: %s", sv.name);
    printf("\n+ Subject of Student no.1: %s", sv.subject);
    printf("\n+ Mark of Student no.1: %.3f", sv.mark);
}


int main()
{
    // struct Student s1, s2;
    Sv sv1, sv2;
    
    printf("Enter name Student no.1: ");
    gets(sv1.name);
    printf("Enter subject Student no.1: ");
    gets(sv1.subject);
    printf("Enter mark Student no.1: ");
    scanf("%f", &sv1.mark);

    // Assign
    Sv child = {"Le Van Hung", "HTML", 99.09};

    printf("\nInformation of all Students\n");
    displayStudent(sv1);


    getch();
    return 0;
}