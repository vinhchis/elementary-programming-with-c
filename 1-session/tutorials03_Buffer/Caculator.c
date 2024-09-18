#include<stdio.h>
#include<conio.h>
int main(){

    int x,y;
    char operator;

    // 1. Nhập số thứ nhất
    printf("Enter number 1: ");
    scanf("%d", &x);

    // 2. Nhập số thứ hai
    printf("Enter number 2: ");
    scanf("%d", &y);

    ////////////Clear buffer : Read character '\n'////////////////
    // // Cách 1
    // getchar();

    // Cách 2
    _flushall(); // fflush(stdin);

    //////////////////////////
    // 3. Nhập toán tử (+, -, *, /)
    printf("Enter one of operators (+ , - , *, /): ");
    operator = getchar();
    // scanf(" %c", &operator); // Mẹo

    // 4. Hiện thị kết quả tính toán
    switch (operator)
    {
        case '+':
            printf("Result of %d %c %d: %d", x,operator, y , x + y);
            break;
        case '-':
            printf("Result of %d %c %d: %d", x, operator, y, x - y);
            break;
        case '*':
            printf("Result of %d %c %d: %d", x, operator, y, x * y);
            break;
        case '/':
            printf("Result of %d %c %d: %f", x, operator, y, (float)x / y);
            break;
        default:
            printf("Error!");
            break;
    }

    getch();
    return 0;
}