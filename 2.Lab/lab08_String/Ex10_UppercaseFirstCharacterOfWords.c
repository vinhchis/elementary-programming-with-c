#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdbool.h>

/*
    Viết chương trình nhập vào 1 chuỗi, đổi ký tự đầu tiên của mỗi từ trong chuỗi thành chữ in hoa. 
    (Sử dụng chương trình con).
*/

int main(){
    char str[200];
    
    printf("Enter a string: ");
    gets(str);

    printf("Before: \"%s\" has %d words.\n", str);

    // Method 2: count words (with multiple consecutive spaces)
    int i = 0;
    char* current = NULL;
    while(i < strlen(str))
    {
        if(current == NULL && str[i] != ' '){
            current = &str[i];
            if(str[i] >= 'a' && str[i] <= 'z'){
                *current = str[i] - 32;
            }
        }

        if(current && (str[i] == ' ')){
            current = NULL;
        }

        i++;
    }
    
    printf("After(Uppercase first character of words): \"%s\"\n", str);

    getch();
    return 0;
}