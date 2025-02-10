#include<stdio.h>

int squarer (int n)
{
    return n*n;
}

int main()
{
    int i;
    for(i = 0;i <= 10; i++){
        printf("Square of %d is %d\n", i , squarer(i));
    }

    return 0;
}

