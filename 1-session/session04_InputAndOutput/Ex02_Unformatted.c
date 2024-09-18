#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    // scanf("%c", &ch);
    ch = getchar();
    // printf("The character has been just entered: %c", ch);
    printf("The character has been just entered: ");
    putch(ch);

    getch();
    return 0;
}