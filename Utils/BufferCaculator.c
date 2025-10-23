#include<stdio.h>
int main(){
    int x,y;
    char op;

    // 1. Nhập số thứ nhất
    printf("Enter number 1: ");
    scanf("%d", &x);

    // 2. Nhập số thứ hai
    printf("Enter number 2: ");
    scanf("%d", &y);

    //////////// Clear buffer : Read character '\n'////////////////
    // // Cách 1
    // getchar();

    // Cách 2
    // fflush(stdin); // tùy compiler

    // cách 3
    while (getchar() != '\n' && getchar() != EOF);

    //////////////////////////
    // 3. Nhập toán tử (+, -, *, /)
    printf("Enter one of ops (+ , - , *, /): ");

    op = getchar();
    // scanf(" %c", &op); // Mẹo

    // 4. Hiện thị kết quả tính toán
    switch (op)
    {
        case '+':
            printf("Result of %d %c %d: %d", x,op, y , x + y);
            break;
        case '-':
            printf("Result of %d %c %d: %d", x, op, y, x - y);
            break;
        case '*':
            printf("Result of %d %c %d: %d", x, op, y, x * y);
            break;
        case '/':
            if(y == 0){
                printf("Can't not divide 0");
            }else{
                printf("Result of %d %c %d: %.2f", x, op, y, (float)x / y);
            }
            break;
        default:
            printf("Invalid operator!!!");
            break;
    }

    return 0;
}