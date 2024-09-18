#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter a whole number: ");
    scanf("%d", &num);


    if(num % 2)
    {
        printf("%d is a odd number.", num);
    }
    else {
        printf("%d is a even number.", num);
    }

    printf("\nThe end.");

    getch();
    return 0;
}