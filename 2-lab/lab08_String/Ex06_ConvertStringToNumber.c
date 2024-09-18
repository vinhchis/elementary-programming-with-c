#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>
/*
    Viết chương trình đổi chuỗi số thành số (sử dụng hàm atoi).
    Ví dụ: nhập vào: “123”, xuất ra số: 123.
*/
int main(){
    char ch[20];
    int n;

    strcpy(ch, "123");

    n = atoi(ch);

    printf("\"%s\" is converted to %d", ch, n);

    getch();
    return 0;
}