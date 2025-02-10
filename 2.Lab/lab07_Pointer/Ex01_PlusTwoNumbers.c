#include<stdio.h>
#include<conio.h>

int main(){
    int a = 20;
    int b =15;
    int *ptr1;
    int *ptr2;
    
    ptr1 = &a;
    ptr2 = &b;

    int sum;

    sum = *ptr1 + *ptr2;

    printf("Sum of %d + %d = %d", a, b, sum);

    getch();
    return 0;
}