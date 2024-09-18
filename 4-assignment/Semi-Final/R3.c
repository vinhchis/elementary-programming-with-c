#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef struct {
    char name[30];
    char rollNo[15];
    int marks;
} Student;

typedef struct {
    Student* elements;
    int size;
} StudentList;

StudentList createStudentList(int size){
    StudentList newList;
    newList.size = size;
    newList.elements = (Student*)malloc(size * sizeof(Student));
    return newList;
}

void setValue(StudentList* students, int index, Student student){
    if(index < students->size && index >= 0){
        students->elements[index] = student;
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

    for(int i=0; i < students->size; i++){
        printf("\nEnter student %d name: ", i + 1);
        
        _flushall();
        gets(student.name);

        printf("Enter Rollno: ");
        gets(student.rollNo);

        printf("Enter marks: ");
        scanf("%d", &student.marks);

        setValue(students, i, student);
    }
}

void searchStudentWithRollno(StudentList students, char rollNo[15])
{
    bool flag = false;
    Student student;
    for(int i = 0; i < students.size ; i++){
        if(strcmp(students.elements[i].rollNo, rollNo) == 0)
        {
            student = students.elements[i];
            flag = true;
            break;
        }
    }

    if(flag)
    {
        printf("Student List Information:\n");
        printf("%*c", 2, ' ');
        printf("Rollno");
        printf("%*c", 4, ' ');
        printf(" ");
        printf("%*c", 2, ' ');
        printf("Name");
        printf("%*c", 6, ' ');
        printf(" ");
        printf(" Marks");
        printf("%*c\n", 5, ' ');
        printf("------------|------------|-----------\n");
        printf("%-12s  %-11s %5d", student.rollNo, student.name, student.marks);
    }
    else{
        printf("\nStudent with rollNo = \"%s\" does not exist.", rollNo);
    }
}
  
    
int main(){
    int n;
    char rollNo[15];
    StudentList students;
    Student student;

    printf("How many students would you like to manage: ");
    scanf("%d", &n);

    students = createStudentList(n); 
    inputStudentList(&students);

    printf("\nEnter Rollno to search: ");
    _flushall();
    gets(rollNo);

    searchStudentWithRollno(students, rollNo);

    getch();
    return 0;

}