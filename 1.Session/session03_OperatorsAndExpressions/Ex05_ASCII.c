#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII of `%c` is %d\n", ch, ch);
    return 0;
}