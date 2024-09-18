#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter a whole number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("%d is a positive number.", num);
    }
    else if(num < 0) 
    {
        printf("%d is a negative number.", num);
    }
    else
    {
        printf("%d is zero.", num);
    }

    printf("\nThe end.");

    getch();
    return 0;
}