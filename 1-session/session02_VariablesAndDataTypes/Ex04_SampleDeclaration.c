#include<stdio.h>
#include<conio.h>

int main()
{
    char abc = 'A'; /* abc of type character - %c */
    int xyz = 10; /* xyz of type integer - %d*/
    float length = 20.5; /* length of type float - %f*/
    double area  = 30.7; /* area of type double - %lf (long float)*/
    long liteyer = 100; /* liteyear of type int - %ld*/
    short arm = 5; /* arm of type short integer - %d (trong window, short = int. Unit short = int /2 )*/

    printf("abc = %c \n", abc);
    printf("xyz = %d \n", xyz);
    printf("length = %f \n", length); 
    printf("length = %.2f \n", length); // độ chính xác : 2
    printf("length = %8.2f \n", length); // độ chính xác : 2 - độ rộng : 8 (phần nguyên + phần thập phân + dấu '.')

    printf("area = %lf \n", area); //
    printf("liteyer = %ld \n", liteyer); // 
    printf("arm = %d", arm);

    getch();
    return 0;
}