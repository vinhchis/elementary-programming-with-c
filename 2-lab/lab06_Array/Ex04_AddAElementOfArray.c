/*
   Viết chương trình thêm 1 phần tử x vào mảng tại vị trí k.
*/
#include<stdio.h>
#include<conio.h>
#define MAX 100

int main()
{
    int n, k;
    float num[MAX], x;

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


    do{
        _flushall();
        printf("\nEnter x-value and k-position: ");        
        scanf("%f%d", &x, &k);
        if(k <= 0 || k > n){
            printf("\tWrong position, Please input again!\n");
        }
    } while(k <= 0 || k > n);
    
    n++;
    for(int i=n; i >= k;i--){
        num[i] = num[i-1];
    }
    num[k-1] = x;
    
    printf("\nPrint out elements of array after add %.3f in %d position: \n", x, k);
    for(int i=0; i<n; i++)
    {
        printf("%8.3f", *(num+i));
    }
    

    getch();
    return 0;
}