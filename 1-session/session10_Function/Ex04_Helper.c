#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool isPositive(float n){
    if(n >= 0)
        return 1;
    return 0;
}

int main()
{
    float N;
    printf("Enter N: ");
    scanf("%f", &N);
    
    if(isPositive(N)){
        printf("%.2f is a Positive number.", N);
    }else{
        printf("%.2f is a Negative number.", N);
    }

    getch();
    return 0;
}

