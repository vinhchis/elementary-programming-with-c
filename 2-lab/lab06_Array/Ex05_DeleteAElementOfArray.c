/*
   Viết chương trình xoá 1 phần tử x vào mảng tại vị trí k.
*/
#include<stdio.h>
#include<conio.h>
#define MAX 100

int main()
{
    int n, k;
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


    do{
        _flushall();
        printf("\nEnter k-position: ");        
        scanf("%d", &k);
        if(k <= 0 || k > n){
            printf("\tWrong position, Please input again!\n");
        }
    } while(k <= 0 || k > n);
    
    n--;
    for(int i= k - 1; i < n-1;i++){
        num[i] = num[i+1];
    }
 
    printf("\nPrint out elements of array after delete a element with position = %d: \n", k);
    for(int i=0; i<n; i++)
    {
        printf("%8.3f", *(num+i));
    }
    

    getch();
    return 0;
}