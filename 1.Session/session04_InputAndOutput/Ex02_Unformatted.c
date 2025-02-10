#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    // scanf("%c", &ch);
    ch = getchar();
    // printf("The character has been just entered: %c", ch);
    printf("The character has been just entered: ");
    putchar(ch);
    return 0;
}