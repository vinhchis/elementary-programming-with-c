#include<stdio.h>
#include<conio.h>

int main()
{
    int width, high;
    int per, area;

    printf("Enter the width of Rectangle: ");
    scanf("%d", &width);

    printf("Enter the high of Rectangle: ");
    scanf("%d", &high);

    per = (high + width) * 2;
    area = high * width;

    printf("\tPerimeter of the Rectangle: 2 * (%d + %d) = %d", width, high, per);
    printf("\n\tArea of the Rectangle: %d * %d = %d", width, high, area);

    getch();
    return 0;
}