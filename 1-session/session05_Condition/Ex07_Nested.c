#include<stdio.h>
#include<conio.h>
int main(){

    int HD, SL;
    printf("Vui long nhap giá trị HD va SL: ");
    scanf("%d%d", &HD, &SL);

    if(HD >= 1000000 && SL > 5)
    {
        printf("Hoa down. Thanh tien : %d", HD);
        printf("\n+ Coupon");
        // if(SL > 5){
        //     printf("Hoa down. Thanh tien : %d", HD);
        //     printf("\n+ Coupon");
        // }
        // else {
        //     printf("Hoa down. Thanh tien : %d", HD);

        // }
    }else{
        printf("Hoa don. Thanh tien: %d", HD);
    }

    getch();
    return 0;

}