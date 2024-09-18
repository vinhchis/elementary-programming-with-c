#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // library for using system("cls") and _exit(0)
#include <ctype.h>
void question1()
{
    printf("\nQuestion 1 performs.");
}

void quesion2()
{
    printf("\nQuestion 1 performs.");
}

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

int main()
{
    int choice;

    do
    {
        system("cls");
        printf("*********************************************************\n");
        printf("\t C PROGRAM LANGUAGE\n");
        printf("\t\t 1. Question 01.\n");
        printf("\t\t 2. Question 02.\n");
        printf("\t\t 3. Exit.\n");
        printf("*********************************************************\n");
        printf("\t Enter Choice (1 - 3): ");
        scanf("%d", &choice);

        system("cls");
        switch (choice)
        {
        case 1:
            question1();
            backMenu();
            break;
        case 2:
            quesion2();
            backMenu();
            break;
        case 3:
            printf("\nProgram exit");
            _exit(0);
        default:
            printf("Your choice isn't valid !!!\n");
            break;
        }
    } while (choice != 3);

    getch();
    return 0;
}