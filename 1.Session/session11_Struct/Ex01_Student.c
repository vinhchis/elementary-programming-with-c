#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char name[30];
    char subject[10];
    float mark;
};
typedef struct Student Sv; // Thay thế:  struct Student -> Sv


void displayStudent(Sv sv){
    printf("+ Name of Student: %s\n", sv.name);
    printf("+ Subject of Student: %s\n", sv.subject);
    printf("+ Mark of Student: %.3f\n", sv.mark);
}


int main()
{
    // struct Student s1, s2;
    Sv sv1;
    
    printf("Enter name Student: ");
    scanf("%s", &sv1.name);
    printf("Enter subject Student: ");
    scanf("%s", &sv1.subject);
    printf("Enter mark Student: ");
    scanf("%f", &sv1.mark);

    // Assign
    Sv sv2 = {"Le Van Hung", "HTML", 99.09};

    printf("\nInformation of all Students\n");
    
    printf("SV no.1\n");
    displayStudent(sv1);

    printf("SV no.2\n");
    displayStudent(sv2);



    return 0;
}