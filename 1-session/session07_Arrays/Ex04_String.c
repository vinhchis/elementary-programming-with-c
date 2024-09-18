#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char ch[5] = {'H', 'E', 'L', 'L', 'X'}; // character array
    char email[50] = "test@gmail.com"; // string

    for(int i = 0; i< strlen(ch);i++){
        printf("%c",ch[i]);
    }   

    printf("\nEmail: %s", email);
    getch();
    return 0;
}