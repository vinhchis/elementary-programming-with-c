#include<stdio.h>
#include<conio.h>

int main(){
    int n = 10;
    // printf("%5c[ahah]%2c[ahhaha]"); // lúc đưuocj lúc không
    printf("%*c", n, ' ');

    getch();
    return 0;
}