#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdbool.h>

/*
    Viết chương trình nhập vào 1 chuỗi, kiểm tra chuỗi vừa nhập có đối xứng hay không? (Sử dụng chương trình con).
    Ví dụ: “aptech”: là chuỗi không đối xứng, “radar”: là chuỗi đối xứng

*/

bool isSmtString(char* str){
    int count = 0;
    while(str[count])
    {
        count++;
    }

    char* left = str;
    char* right = &str[count-1];

    while(right > left)
    {
        if(*left != *right){
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main(){
    char str[20];
    printf("Enter a string: ");
    gets(str);

    if(isSmtString(str)){
        printf("%s is a sysmetrical string.", str);
    }
    else{
        printf("%s is not a sysmetrical string.", str);
    }


    getch();
    return 0;
}