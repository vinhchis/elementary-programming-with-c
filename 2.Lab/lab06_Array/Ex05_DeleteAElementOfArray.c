/*
   Viết chương trình xoá 1 phần tử x vào mảng tại vị trí k.
*/
#include<stdio.h>
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
        printf("num[%d]: ", i);
        scanf("%f", &num[i]);
        while(getchar() != '\n' && getchar() != EOF);

    }

    printf("Print out elements of array: ");
    for(int i=0; i<n; i++)
    {
        printf("%8.3f", num[i]);
    }


    do{
        printf("\nEnter k-position: ");        
        scanf("%d", &k);
        if(k <= 0 || k > n){
            printf("\tWrong position, Please input again!\n");
        }
    } while(k <= 0 || k > n);
    
    k -= 1; // index
    for(int i = k; i < n-1;i++){
        num[i] = num[i+1];
    }
    
    n -=1;
    printf("\nPrint out elements of array after delete a element with position = %d: \n", k);
    for(int i=0; i<n; i++)
    {
        printf("%8.3f", *(num+i));
    }
    

    getchar();
    return 0;
}