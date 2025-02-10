/*
   Viết chương trình tìm vị trí của phần tử có giá trị nhỏ nhất trong mảng 1 chiều các số nguyên.
*/
#include<stdio.h>
#include<conio.h>
#define MAX 100

int main()
{
    int n;
    int num[MAX], min;

    do{
        printf("Enter the total of array: ");
        scanf("%d", &n);
    } while(n <= 0 || n > 100);

    for(int i=0; i < n; i++)
    {
        _flushall();
        printf("num[%d]: ", i);
        scanf("%d", &num[i]);
    }

    printf("Print out elements of array: ");
    for(int i=0; i<n; i++)
    {
        printf("%8d", num[i]);
    }

    min = num[0];
    for(int i=1; i<n; i++)
    {
        if(min > num[i]){
            min = num[i];
        }
    }

    printf("\nMin element of array: %d", min);

    getch();
    return 0;
}