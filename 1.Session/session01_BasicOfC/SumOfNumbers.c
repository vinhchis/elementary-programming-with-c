#include <stdio.h>

int main()
{
    int n, s = 0;
    printf("Input N: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        s += i;
    }

    printf("Sum of number from 1 to %d = %d\n",n, s);
    
    return 0;
}