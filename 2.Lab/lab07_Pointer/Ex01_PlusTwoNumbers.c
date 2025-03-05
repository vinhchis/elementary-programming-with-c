#include<stdio.h>

int main(){
    int a = 20;
    int b =15;
    int *ptr1;
    int *ptr2;
    int sum;

    // & - lấy địa chỉ của biến
    ptr1 = &a; 
    ptr2 = &b;

    
    sum = *ptr1 + *ptr2; // * lấy giá trị từ con trỏ 

    printf("Address of ptr1 and prt2: %p , %p with values %d, %d\n", (void*)ptr1, (void*)ptr2, *ptr1, *ptr2);

    printf("Sum of %d + %d = %d\n", a, b, sum);

    getchar();
    return 0;
}