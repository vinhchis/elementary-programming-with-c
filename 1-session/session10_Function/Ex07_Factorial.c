/*
    Viết giai thừa của 5: 
        5! = 5*4*3*2*1  
*/
#include<stdio.h>
#include<conio.h>
int factorial(int n){
    int f = 1;
    for(int i = 1; i <= n ; i++){
        f *= i;
    }
    return f;
}
int main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("%d! = %d", n, factorial(n));
    getch();
    return 0;
}