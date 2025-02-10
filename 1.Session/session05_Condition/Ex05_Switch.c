#include<stdio.h>
#include <unistd.h>

int main()
{
    int x;
    printf("Enter your Choice(1 - 3): ");
    scanf("%d", &x);


    switch (x)
    {
        case 1:
            printf("Choice is 1\n");
            break;
        case 2:
            printf("Choice is 2\n");
            break;
        case 3:
            printf("Program exit\n");
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

    return 0;
}