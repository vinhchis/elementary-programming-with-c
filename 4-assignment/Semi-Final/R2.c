#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int n){
    if(n < 2){
        return false;
    }
        
    for(int i=2; i < sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n;
    do {
        printf("How many elements in array(Valid range in 1 - 10)?");
        scanf("%d", &n);
        if(n < 0 || n > 10){
            printf("Input is not valid!!!\n");
            printf("Please, input again");
        }

    }while(n< 0 || n> 10);

    int* arr;
    arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        _flushall();
        printf("A[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray List:");
    for(int i=0; i < n; i++){
        printf(" %d", arr[i]);
    }

    printf("\nPrime List: ");
    for(int i=0; i < n; i++){
        if(isPrime(arr[i]))
        {
            printf(" %d", arr[i]);
        }
    }
    getch();
    return 0;
}