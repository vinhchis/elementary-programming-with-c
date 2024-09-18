#include<stdio.h>
#include<conio.h>

int main()
{
    int a0=0, a1=1, result;
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    // 1 2
    printf("%d, %d", a0, a1);

    for(int i = 3; i<= n;i++){
        result = a0 + a1;
        printf(", %d", result);
        a0 = a1;
        a1 = result;
    }

    getch();
    return 0;
}