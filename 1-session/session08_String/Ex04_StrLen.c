#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
    Hãy nhập mộ số và đếm xem số đó có bao nhiêu ký số
    ví dụ 1998 -> 4 ký số
*/
int main(){
    char num[10];
    printf("Enter N: ");
    scanf("%s", &num);

    printf("%s has %d characters",num , strlen(num));

    getch();
    return 0;
}