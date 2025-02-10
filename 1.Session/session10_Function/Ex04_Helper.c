#include<stdio.h>
#include<stdbool.h>

bool isPositive(float n){
    if(n >= 0)
        return true;
    return false;
}

int main()
{
    float N;
    printf("Enter N: ");
    scanf("%f", &N);
    
    if(isPositive(N)){
        printf("%.2f is a Positive number.\n", N);
    }else{
        printf("%.2f is a Negative number.\n", N);
    }

    return 0;
}

