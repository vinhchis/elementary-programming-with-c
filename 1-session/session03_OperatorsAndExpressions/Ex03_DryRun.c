#include<stdio.h>
#include<conio.h>
/*
    Snippet:
    -------------------
    int tmp = 10;
    printf("%d", tmp++);
    printf("%d", ++tmp);
    -------------------
    a. 1010
    b. 1011
    c. 1112
    d. 1012
    e. None of above

    -> tmp
    tmp += 1
    tmp += 1
    -> tmp
    => d. 1012
*/

int main(){
    int tmp = 10;
    printf("%d", tmp++);
    printf("%d", ++tmp);

    getch();
    return 0;
}