#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>
/*
   Viết chương trình nhập vào 1 chuỗi, biến đổi chuỗi này thành chữ hoa và xuất ra màn hình. 
   Làm tương tự cho chữ thường (Sử dụng chương trình con).
*/
void uppercase(char* str){
    int i = 0;
    while(str[i]){
        if( str[i] >= 'a' && str[i] <= 'z')
        {
           str[i] = str[i] - 32;
        }
        i++;   
    }
}

void lowercase(char* str){
    int i = 0;
    while(str[i]){
        if( str[i] >= 'A' && str[i] <= 'Z')
        {
           str[i] = str[i] + 32;
        }
        i++;   
    }
}


int main(){
    char str[20];
    char* temp;
    strcpy(str, "aBc");

    printf("Before conversion: %s\n", str);
    
    uppercase(str);

    printf("Uppercase of string to \"%s\"\n", str);

    lowercase(str);
    printf("Lowercase of string to \"%s\"\n", str);

    getch();
    return 0;
}