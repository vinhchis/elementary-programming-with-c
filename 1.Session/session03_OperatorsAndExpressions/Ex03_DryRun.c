#include<stdio.h>
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
    printf("Before: temp = %d\n", tmp);
    printf("After(tmp++): temp = %d\n", tmp++);
    printf("After(++temp): temp = %d\n", ++tmp);

    return 0;
}