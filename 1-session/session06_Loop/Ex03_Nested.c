#include<stdio.h>
#include<conio.h>
/*
    - Đường thẳng: Tập hợp nhiều điểm
    - Tập hợp các đường thằng chồng thahf mặt phẳng
*/

int main()
{
    int n;
    printf("Enter a number of stars: ");
    scanf("%d", &n);
    
    // for(int row = 1; row <=5 ; row++){
    //     for(int col =1; col <=5; col++){
    //         printf("*\t");
    //     }
    //     printf("\n");
    // }

    // for(int row = 1; row <=n ; row++){
    //     for(int col = n; col >= row; col--){
    //         printf("*\t");
    //     }
    //     printf("\n");
    // }

    for(int row = 1; row <=n ; row++){
        for(int col = n; col >= row; col--){
            printf("%d\t", n + 1 - col);
        }
        printf("\n");
    }

    getch();
    return 0;
}