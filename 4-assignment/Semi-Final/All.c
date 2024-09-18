#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

///// R2 ////
bool isPrime(int n){
    if(n < 2){
        return false;
    }
        
    for(int i=2; i < sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
void R2(){
    int n;
    do {
        printf("How many elements in array(Valid range in 1 - 10)?");
        scanf("%d", &n);
        if(n < 0 || n > 10){
            printf("Input is not valid!!!\n");
            printf("Please, input again");
        }

    }while(n< 0 || n> 10);

    int* arr;
    arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        _flushall();
        printf("A[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray List:");
    for(int i=0; i < n; i++){
        printf(" %d", arr[i]);
    }

    printf("\nPrime List: ");
    for(int i=0; i < n; i++){
        if(isPrime(arr[i]))
        {
            printf(" %d", arr[i]);
        }
    }
}

//// R3 ////
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
  
void R3(){
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
}

// back Menu
void backMenu()
{
    char ch;
    do
    {
        printf("\n\nCome back Menu ?\n");
        printf("Enter Y(y)/N(n): ");
        _flushall();
        ch = getchar();

        if (toupper(ch) == 'N')
        {
            printf("\nProgram exit");
            _exit(0);
        }
        else if (toupper(ch) == 'Y')
        {
        }
        else
        {
            printf("Your choice isn't valid !!!\n");
        }
    } while (toupper(ch) != 'Y');
}

int main(){
    int choice; 
    do{
        system("cls");
        // Q1 
        printf("*********************************************************\n");
        printf("\t C PROGRAM LANGUAGE\n");
        printf("\t\t 1. R-2.\n");
        printf("\t\t 2. R-3.\n");
        printf("\t\t 3. Exit.\n");
        printf("*********************************************************\n");
        printf("\t Enter Choice (1 - 3): ");
        scanf("%d", &choice);

        system("cls"); 

        switch (choice)
        {
        case 1:
            R2();
            backMenu();
            break;
        case 2:
            R3();
            backMenu();
            break;
        case 3:
            _exit(0);
        default:
            printf("Your choice isn't valid !!!\n");
            getch();
            break;
        }
    } while(choice != 3);

}
