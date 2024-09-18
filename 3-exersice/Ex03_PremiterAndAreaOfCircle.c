#include<stdio.h>
#include<conio.h>

int main()
{
    const float pi = 3.14;
    float radius;
    float per, area;

    printf("Enter the radius of Circle: ");
    scanf("%f", &radius);

    per = 2 * radius * pi;
    area = radius * radius * pi;

    printf("\tPerimeter of the Circle: 2 * %.2f * %.2f = %.2f", radius, pi, per);
    printf("\n\tArea of the Cirscle: %.2f * %.2f * %.2f = %.2f", radius, radius, pi, area);

    getch();
    return 0;
}