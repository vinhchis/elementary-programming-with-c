#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    Dãy fibonacci: 0, 1, 1, 2, 3, 5, 8, 13
*/
void fibonacci(int n)
{
    int a0 = 0, a1 = 1, result;
    // 0 1
    if (n >= 3)
    {
        printf("%d, %d", a0, a1);

        for (int i = 3; i <= n; i++)
        {
            result = a0 + a1;
            printf(", %d", result);
            a0 = a1;
            a1 = result;
        }
    }
    else
    {
        printf("Invalid\n");
        printf("Please Enter to Input N (>=3)\n");
        getch();
    }
}

int main()
{
    int n;
    do
    {
        system("cls");
        printf("Enter N: ");
        scanf("%d", &n);
        fibonacci(n);
    } while (n < 3);
    
    getch();
    return 0;
}