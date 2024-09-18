#include<stdio.h>
#include<conio.h>
#include<string.h>
/*

*/
int main(){
    // Khai báo chuỗi s1, s2
    char s1[100], s2[100];

    // Nhập giá trị 2 chuỗi
    printf("Enter s1: ");
    gets(s1);
    printf("Enter s2: ");
    gets(s2);

    // Hiển thị s1 và s2 trước khi gọi hàm
    printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);

    // Gọi hàm strcat()
    strcat(s1, s2);

    // Hiển thị s1 và s2 sau khi gọi hàm
    printf("After using strcat(s1, s2)\n");
    printf("s1 = \"%s\", s2 = \"%s\"", s1, s2);


    getch();
    return 0;
}