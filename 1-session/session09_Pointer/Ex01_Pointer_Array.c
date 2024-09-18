#include<stdio.h>
#include<conio.h>
/*
    *num -> *(num + 0)
         -> *(num + 1)
         -> *(num + 2)
    ---------------------
    1) *num++
    2) num -> pointer, *num: value of array elements
    3) => num: pointer
*/
int main()
{
    int num[3] = {1, 3, 5};
    printf("num[0]: %d", *num);
    printf("\nnum[1]: %d", *(num+1));
    printf("\nnum[2]: %d", *(num+2));

    getch();
    return 0;
}