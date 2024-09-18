#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("*********************************************************\n");
    printf("\t C PROGRAM LANGUAGE\n");
    printf("\t\t 1. Question 02.\n");
    printf("\t\t 2. Question 03.\n");
    printf("\t\t 3. Exit.\n");
    printf("*********************************************************\n");
    printf("\t Enter Choice (1 - 3) :");
    scanf("%d", &x);

    if(x == 1)
    {
        printf("\nChoice is 1");
    }
    else if (x == 2) {
        printf("\nChoice is 2");
    }
    else if (x == 3)
    {
        printf("\nProgram exit");
        _exit(0); // #include<stdlib.h>
    }
    else {
        printf("\nInvalid Choice");
    }


    getch();
    return 0;
}