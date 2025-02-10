#include<stdio.h>

int main()
{
    int a = 10;
    float b = 20;

    printf("Undefined Behavior -> %d + %f = %d\n", a, b, a + b); // 0 
    printf("Implicit (%%f) -> %d + %f = %f \n", a, b, a + b); // 30.000
    printf("Explicit (%%d) -> %d + %f = %d\n", a, b, a + (int)b);// 30

    return 0;
}