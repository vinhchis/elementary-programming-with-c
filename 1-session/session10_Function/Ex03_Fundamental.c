#include<stdio.h>
#include<conio.h>
//Case 1:
void mp3(){
    printf("Play Music\n");
}
//Case 2:
void sum(int x, int y){
    printf("%d + %d = %d\n", x, y, x + y);
}

float countAmount(int num, float price)
{
    return num*price;
}
int main()
{
    int i;
    float amount;
    mp3();
    sum(5, 6);
    amount = countAmount(1000, 20000);
    printf("Amount: %.3f\n", amount);



    getch();
    return 0;
}

