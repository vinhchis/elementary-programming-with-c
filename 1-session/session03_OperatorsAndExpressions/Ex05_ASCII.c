#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII of %c is %d", ch, ch);
    getch();
    return 0;
}