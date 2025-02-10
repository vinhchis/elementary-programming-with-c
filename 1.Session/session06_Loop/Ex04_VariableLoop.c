#include <stdio.h>

int main()
{

    int num;

    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("A positive number is greater than zero or equaled.\n");
            printf("Enter a character to continue!!.\n");
            while (getchar() != '\n' && getchar() != EOF);
            getchar();
        }
    } while (num < 0);

    printf("%d is valid.\n", num);

    return 0;
}