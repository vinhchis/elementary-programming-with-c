#include<stdio.h>
#include<conio.h>
/*
    Viết chương trình in mảng theo chiều đảo ngược bởi sử dụng con trỏ trong C.
*/

int main(){
    int n, num[10];
    int *ptr;

    printf("Enter N: ");
    scanf("%d", &n);

    ptr = num;
    for(int i=0; i< n; i++){
        _flushall();
        printf("Enter number %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = num;
    printf("\nPrint out of the elements of array\n");
    for(int i=0; i < n; i++){
        printf("%4d", *(ptr + i));
    }

    ptr = &num[n-1];
    printf("\nPrint Reverse array\n");
    for(int i = n - 1; i >= 0; i--){
        printf("%4d", *ptr);
        ptr--;
    }


    getch();
    return 0;
}