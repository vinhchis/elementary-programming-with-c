#include<stdio.h>
#include <unistd.h>
int main()
{
    int x;
    printf("*********************************************************\n");
    printf("\t C PROGRAM LANGUAGE\n");
    printf("\t\t 1. Question 02.\n");
    printf("\t\t 2. Question 03.\n");
    printf("\t\t 3. Exit.\n");
    printf("*********************************************************\n");
    printf("\t Enter Choice (1 - 3): ");
    scanf("%d", &x);

    if(x == 1)
    {
        printf("\nChoice is 1\n");
    }
    else if (x == 2) {
        printf("\nChoice is 2\n");
    }
    else if (x == 3)
    {
        printf("\nProgram exit\n");
        _exit(0); // #include<unistd.h>
    }
    else {
        printf("\nInvalid Choice\n");
    }


    return 0;
}