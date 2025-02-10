#include<stdio.h>
#include<ctype.h>

int main()
{
    char lch;
    printf("Enter a lowercase character: ");
    scanf("%c", &lch);
    // printf("Uppercase character of %c is %c", lch, (int)lch - 32);
    printf("Uppercase character of '%c' is '%c'\n", lch, toupper(lch));

    return 0;
}