#include<stdio.h>
#include<string.h>
#include <stdbool.h>

/*
    Viết chương trình đếm số từ trong 1 chuỗi nhập từ bàn phím.
    Ví dụ: “Hoc lap trinh tai Aptech” có 5 từ.
*/

int main(){
    char str[200];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove '\n'

    int i = 0, count = 0;
    char* current = NULL;
    int length = strlen(str);
    while(i < length)
    {
        if(current == NULL && str[i] != ' '){
            current = &str[i];
        }

        if(current && (str[i] == ' ' || i == length - 1)){
            count++;
            current = NULL;
        }

        i++;
    }

    // count -= 1;
    
    printf("\"%s\" has %d words.", str, count);
  

    
    getchar();
    return 0;
}