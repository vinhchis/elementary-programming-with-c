#include<stdio.h>
#include<conio.h>
/*
    + unary operator: ++, -- (chỉ 1 đơn vị)
        int n = 5;
        n++; (n => 6) 
        => Binary: n = n + 1;
        => Shorthand: n += 1;
    
    + Case 1:  Giá trị mới của biến sẽ được sử dụng ngay trong biểu thức hiện tại. cộng trước tăng trước -
        int a, b;
        a = 10;
        b = ++a; (a => 11, b => 11)
        ------------------------
        1. a += 1
        2. b = a
        Khi nào dùng ?
    + Case 2: Giá trị ban đầu của biến (trước khi tăng) sẽ được sử dụng trong biểu thức hiện tại.
        int a, b;
        a = 10;
        b = a++; (a => 11, b = 10)
        -----------------------
        1. b = a
        2. a += 1
*/
int main()
{
    int a, b;
    a = 10;
    b = a++;

    printf("a = %d, b = %d", a, b);

    getch();
    return 0;
}