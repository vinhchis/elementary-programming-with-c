#include<stdio.h>
#include<conio.h>
#include <string.h>


int main()
{
    int arr[10];
    int i, total = 0, high;
    for(int i=0; i< 10;i++){
        printf("\nEnter value: ", i + 1);
        scanf("%d", &arr[i]);
    }

    high = arr[0];
    for(int i =0;i < 10; i++){
        if(arr[i] > high)
        {
            high = arr[i];
        }
    }

    printf("\nHighest value entered was %d", high);

    for(int i =0; i < 10; i++){
        total += arr[i];
    }

    printf("\nThe average of the elements of array is %d\n", total/10);

    getch();
    return 0;
}