#include<stdio.h>
#include<conio.h>
/*
    Viết chương trình nhập 5 số, cộng và hiển thị tổng 5 số
    1. Khai  báo 5 biến        -> khai báo 5 số
    2. Viết lệnh nhập 5 biến   -> viết nhiều code
    ----
    3. Giải thuật               -> không thể truy xuất từng phần tử nhập trươc đó
    => khái niệm : Array!
*/
int main()
{
    int x, sum = 0;
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5 ; i++){
        printf("Enter number %d: ", i + 1);
        _flushall();
        scanf("%d", &x);
        sum += x;
    }
    printf("Sum of 5 numbers is: %d", sum);

    printf("Enter x(1-5) times to view x-number: ");
    scanf("%d", &x);


    getch();
    return 0;
}