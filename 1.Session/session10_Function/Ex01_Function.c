#include<stdio.h>
/*
    Không khai báo kiểu trả về -> implicit (void/int)
        void -> not has return
        int -> has return
*/
int main()
{
    int i;
    int squarer(int n); // prototype
    for(i = 0;i <= 10; i++){
        printf("Square of %d is %d\n", i , squarer(i));
    }
    return 0;
}

int squarer (int x)
{
    int j;
    j = x *x;
    return (j);
}