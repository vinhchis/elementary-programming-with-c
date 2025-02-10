/*
    Viết chương trình tìm giá trị âm trong mảng 1 chiều các số thực.
    Giá trị của các phần tử của mảng nhập từ bàn phím
*/
#include<stdio.h>
#include<conio.h>
#define MAX 100

int main()
{
    int n;
    float num[MAX];

    do{
        printf("Enter the total of array: ");
        scanf("%d", &n);
    } while(n <= 0 || n > 100);

    for(int i=0; i < n; i++)
    {
        _flushall();
        printf("num[%d]: ", i);
        scanf("%f", &num[i]);
    }

    printf("Print out elements of array: ");
    for(int i=0; i<n; i++)
    {
        printf("%8.3f", num[i]);
    }

    printf("\nPrint out negative elements of array: ");
    for(int i=0; i<n; i++)
    {
        if(num[i] < 0){
            printf("%8.3f", num[i]);
        }
    }
    getch();
    return 0;
}