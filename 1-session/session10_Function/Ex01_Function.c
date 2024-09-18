#include<stdio.h>
#include<conio.h>
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
        printf("\nSquare of %d is %d", i , squarer(i));
    }
    getch();
    return 0;
}

squarer (int x)
{
    int j;
    j = x *x;
    return (j);
}