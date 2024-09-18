#include<stdio.h>
#include<conio.h>
/*
    1. khai báo trước, khởi tạo sau
        int n;
        n = 1;

    2. Khai báo, khởi tạo luôn
        int n = 1;

*/
int main()
{
    // 1. khai báo trước, khỏi tạo sau
    // int n[3];
    // n[0] = 1;
    // n[1] = 3;
    // n[2] = 7;

    // 2. Khai báo, khởi tạo luôn
    int n[3] = {1, 3, 7};

    for(int i=0; i < 3; i++){
        printf("%d\t", n[i]);
    }


    getch();
    return 0;
}