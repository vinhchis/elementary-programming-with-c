#include<stdio.h>
#include<conio.h>
/*

*/
int main(){
    int n;
    printf("How many numbers do you want to enter, N = ");
    scanf("%d", &n);

    int num[10], temp;

    for(int i = 0; i<n; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(int i=0; i < n -1 ; i++)
    {
        for(int j= i+1; j < n;j++){
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("\nAssending Numbers: ");
    for(int i= 0; i<n;i++){
        printf("%4d", num[i]);
    }

    getch();
    return 0;
}