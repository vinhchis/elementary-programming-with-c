/*
   Viết chương trình sắp xếp mảng 1 chiều các số thực tăng dần (sử dụng thuật toán bubble sort).
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

    float temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i + 1; j<n; j++){
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("\nPrint out Ascending array: ");
    for(int i=0; i<n; i++)
    {
        printf("%8.3f", num[i]);
    }

    getch();
    return 0;
}