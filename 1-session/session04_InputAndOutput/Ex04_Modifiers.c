#include<stdio.h>
#include<conio.h>

int main()
{
    printf("The number 555 in various form: \n");
    printf("Withou any modifier: \n");
    printf("[%d]\n", 555);
    printf("With - modifier :\n");
    printf("[%-d]\n", 555);
    printf("With digit string 10 as modifier : \n");
    printf("[%10d]\n");
    printf("With 0 as modifier :\n");
    printf("[%0d]\n", 555);
    printf("With 0 and digit string 10 as modifiers :\n");
    printf("[%010d]\n", 555);
    printf("With -, 0 and digit string 10 as modifiers: \n");
    printf("[%-010d]\n", 555);

    getch();
    return 0;
}