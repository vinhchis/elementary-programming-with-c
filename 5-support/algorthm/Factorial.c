/*
    Viết giai thừa của 5: 
        5! = 5*4*3*2*1  
*/

#include<stdio.h>
#include<conio.h>
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