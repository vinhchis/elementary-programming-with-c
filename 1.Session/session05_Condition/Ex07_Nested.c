#include<stdio.h>
int main(){

    int HD, SL;
    printf("Vui long nhap giá trị HD va SL: ");
    scanf("%d%d", &HD, &SL);

    if(HD >= 1000000 && SL > 5)
    {
        int TT = HD - 5000 * SL;
        printf("Thành tiền(đã giảm %d K): %d\n", 5000*SL, TT);
        printf("\tBạn được 1 Phiếu giảm giá (50K) !!!\n");
        
    }else{
        printf("Thành tiền: %d\n", HD);
    }

    return 0;

}