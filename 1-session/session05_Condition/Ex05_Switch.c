#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("Enter your Choice(1 - 3): ");
    scanf("%d", &x);


    switch (x)
    {
        case 1:
            printf("\nChoice is 1");
            break;
        case 2:
            printf("\nChoice is 2");
            break;
        case 3:
            printf("\nProgram exit");
            _exit(0);
        default:
            break;
    }


    // if(x == 1)
    // {
    //     printf("\nChoice is 1");
    // }
    // else if (x == 2) {
    //     printf("\nChoice is 2");
    // }
    // else if (x == 3)
    // {
    //     printf("\nChoice is 3");
    // }
    // else {
    //     printf("\nInvalid Choice");
    // }

    getch();
    return 0;
}