#include<stdio.h>
#include<conio.h>
#include <string.h>


int main()
{
    int row=3;
    int col=4;

    // int num[row][col];
    // memset( num, 0, row*col*sizeof(int) );

    int num[3][4] = {
                        {1, 4, 5, 8},
                        {5, 7, 6, 10},
                        {5, 10, 45, 200}
                    };

    for(int i =0 ; i<row; i++)
    {
        for(int j=0; j< col ;j++)
        {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }

    // string
    char arr[3][50] = {"Le Van A", "Nguyen Hoai Nam", "Trinh Le Hoai"};

    for(int i = 0; i < 3;i++)
    {
        printf("%d - %s\n", i + 1, arr[i]);
    }
    

    getch();
    return 0;
}