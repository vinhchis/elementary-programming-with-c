#include <stdio.h>

int main(){
    int n, result = 0;

    printf("Input n = ");
    scanf("%d", &n);
    result = n * n;
    printf("%d^2 = %d\n", n, result);
    getch();
    return 0;
}