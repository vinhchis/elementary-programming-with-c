#include<stdio.h>
#include<conio.h>
/*
    0, 1, 3, 6, 10, 15, 21
*/

int main()
{
    int n,num =0;

    printf("Enter N: ");
    scanf("%d",&n);
    
    // printf("%d", n);

    for(int i = 0; i < n;i++)
    {
        num += i;
        printf("%d,\t", num);
    }

  
    getch();
    return 0;
}