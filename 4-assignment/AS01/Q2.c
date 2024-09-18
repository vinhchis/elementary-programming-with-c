#include<stdio.h>
#include<conio.h>
int main()
{
    int n, f=1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        f *= i;
    }

    printf("Factorial: %d! = %d", n, f);    

    getch();
    return 0;
}