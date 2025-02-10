#include<stdio.h>

int main()
{
    int num;
    printf("Enter a whole number: ");
    scanf("%d", &num);


    if(num % 2)
    {
        printf("%d is a odd number.\n", num);
    }
    else {
        printf("%d is a even number.\n", num);
    }


    return 0;
}