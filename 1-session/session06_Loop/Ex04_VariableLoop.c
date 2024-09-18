#include<stdio.h>
#include<conio.h>

int main(){ 

    int num;

    do{
        _flushall();
        printf("Enter a positive number: ");
        scanf("%d", &num);
        if(num < 0)
        {
            printf("A positive number is greater than zero or equaled.\n");
            printf("Enter a character to continue!!.\n");
            getche();
        }
    }while(num < 0);

    printf("%d is valid.",num);

    getch();
    return 0;
}