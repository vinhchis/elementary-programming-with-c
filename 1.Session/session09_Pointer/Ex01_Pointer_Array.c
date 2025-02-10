#include<stdio.h>
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
    printf("num[0]: %d\n", *num);
    printf("num[1]: %d\n", *(num+1));
    printf("num[2]: %d\n", *(num+2));

    return 0;
}