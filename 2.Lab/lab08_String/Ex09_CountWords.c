#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdbool.h>

/*
    Viết chương trình đếm số từ trong 1 chuỗi nhập từ bàn phím.
    Ví dụ: “Hoc lap trinh tai Aptech” có 5 từ.
*/

int main(){
    char str[200];
    
    printf("Enter a string: ");
    gets(str);

    //  Method 1: count spaces(1 space = 2 words) 
    //int count = 1;
    // int i = 0 ;
    // while(str[i])
    // {
    //     if(str[i] == ' ')
    //     {
    //         count++;
    //     }
    //     i++;
    // }

    // Method 2: count words (with multiple consecutive spaces)
    int i = 0, count = 0;
    char* current = NULL;
    while(i < strlen(str))
    {
        if(current == NULL && str[i] != ' '){
            current = &str[i];
        }

        if(current && (str[i] == ' ' || i == strlen(str) -1)){
            count++;
            current = NULL;
        }

        i++;
    }
    

    printf("\"%s\" has %d words.", str, count);
    
    getch();
    return 0;
}