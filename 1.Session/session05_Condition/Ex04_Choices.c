#include<stdio.h>

int main()
{
    int x;
    printf("Enter your Choice(1 - 3): ");
    scanf("%d", &x);

    if(x == 1)
    {
        printf("Choice is 1\n");
    }
    else if (x == 2) {
        printf("Choice is 2\n");
    }
    else if (x == 3)
    {
        printf("Choice is 3\n");
    }
    else {
        printf("Invalid Choice\n");
    }

    return 0;
}