#include<stdio.h>

int main()
{
    int a0=0, a1=1, result;
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    // 1 2
    printf("Fibonacci of %d: %d, %d", n, a0, a1);

    for(int i = 3; i<= n;i++){
        result = a0 + a1;
        printf(", %d", result);
        a0 = a1;
        a1 = result;
    }

    putchar('\n');

    return 0;
}