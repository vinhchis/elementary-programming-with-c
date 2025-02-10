#include<stdio.h>
#include <string.h>


int main()
{
    int arr[10];
    int i, total = 0, high;
    printf("Enter 10 Numbers\n");
    for(int i=0; i< 10;i++){
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    high = arr[0];
    for(int i =0;i < 10; i++){
        if(arr[i] > high)
        {
            high = arr[i];
        }
    }

    printf("\tHighest value entered was %d\n", high);

    for(int i =0; i < 10; i++){
        total += arr[i];
    }

    printf("\tThe average of the elements of array is %d\n", total/10);

    return 0;
}