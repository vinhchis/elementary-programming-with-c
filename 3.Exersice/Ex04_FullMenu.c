#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // library for using system("cls") and _exit(0)
#include <ctype.h>
void perimeterAndAreaOfRectangle()
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
}

void premiterAndAreaOfCircle()
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
}

void backMenu()
{
    char choice_2;
    do
    {
        printf("\n\nCome back Menu ?\n");
        printf("Enter Y(y)/N(n): ");
        _flushall();
        choice_2 = getchar();

        if (toupper(choice_2) == 'N')
        {
            printf("\nProgram exit");
            _exit(0);
        }
        else if (toupper(choice_2) == 'Y')
        {
        }
        else
        {
            printf("Your choice isn't valid !!!\n");
        }
    } while (toupper(choice_2) != 'Y');
}

int main()
{
    int choice_1;

    do
    {
        system("cls");
        printf("*********************************************************\n");
        printf("\t C PROGRAM LANGUAGE\n");
        printf("\t\t 1. Question 02.\n");
        printf("\t\t 2. Question 03.\n");
        printf("\t\t 3. Exit.\n");
        printf("*********************************************************\n");
        printf("\t Enter Choice (1 - 3): ");
        scanf("%d", &choice_1);

        system("cls");
        switch (choice_1)
        {
        case 1:
            perimeterAndAreaOfRectangle();
            backMenu();
            break;
        case 2:
            premiterAndAreaOfCircle();
            backMenu();
            break;
        case 3:
            printf("\nProgram exit");
            _exit(0);
        default:
            printf("Your choice isn't valid !!!\n");
            break;
        }

    } while (choice_1 != 3);

    getch();
    return 0;
}