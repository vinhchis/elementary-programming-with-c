#include<stdio.h>
#include<conio.h>
/*
    1. Counter:
        1.1. Fixed loop (vòng lặp cố định) :  for
        1.2. Variable loop (vòng lặp biến thiên) : while , do...while (repeat...until)
    2. Condition test
        2.1. Check before: for, while
        2.2. Check after: do...while
    ------------
    systax for loop
    for(a;b;c){}
    a: initial counter - khởi tạo biến đếm (Đếm từ đâu ?)
    b: condition - điều kiện (Đếm tới đâu ?)
    c: evaluated expression - biểu thức tăng / giảm (Mỗi bước sẽ tăng hay giảm bao nhiêu đơn vị của biến đếm)  
*/

int main(){
    // for(int i = 1; i <= 10; i++){
    //     printf("%d - Hello\n", i);
    // }

    // for(int i = 10; i >= 1; i--){
    //     printf("%d - Hello\n", i);
    // }

    // int i =1;
    // while(i <= 10)
    // {
    //     printf("%d - Hello\n", i);
    //     i++;
    // }

    int i =1;
    do{
        printf("%d - Hello\n", i);
        i++;
    }while(i<=10);


    getch();
    return 0;
}