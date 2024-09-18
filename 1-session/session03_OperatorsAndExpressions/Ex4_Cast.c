#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 10;
    float b = 20;

    // printf("implicit -> %d + %f = %d", a, b, a + b); //return 0
    printf("implicit (%%f) -> %d + %f = %f \n", a, b, a + b);
    printf("explicit (%%d) -> %d + %f = %d", a, b, a + (int)b);

    getch();
    return 0;
}