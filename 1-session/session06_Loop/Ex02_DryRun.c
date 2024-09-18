#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    for (int i =0, ch = 65; i< 4;i++)
    {
        ch += 2*i;
        printf("%c\t",ch);
    }
    getch();
    return 0;
}
