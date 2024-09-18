#include<stdio.h>
#include<conio.h>
/*
    Viết giai thừa của 5:
*/
int main()
{
    int n , f = 1;
    // f = 1 * 2 * 3 * 4 * 5;

    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n ; i++){
        f *= i;
    }

    printf("%d! = %d", n, f);
    getch();
    return 0;
}