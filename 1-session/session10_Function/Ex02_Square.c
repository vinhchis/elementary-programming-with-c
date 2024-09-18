#include<stdio.h>
#include<conio.h>

squarer (int n)
{
    return n*n;
}

int main()
{
    int i;
    for(i = 0;i <= 10; i++){
        printf("\nSquare of %d is %d", i , squarer(i));
    }
    getch();
    return 0;
}

