#include<stdio.h>
#include<conio.h>
/*
    1. Hãy nhập 10 số
    2. Hãy nhập k
    3. Hiển thị tất cả các số chẵn chia hết cho k
*/
int main()
{
    int num[10], k, flag = 0;
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10 ; i++){
        printf("Enter number %d: ", i + 1);
        _flushall();
        scanf("%d", &num[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 0; i < 10 ; i++){
        if(num[i] % k == 0 && num[i] %2 == 0)
        {
            if(flag == 0)
            {
                printf("\nNumbers divisible by %d are:\n", k);
            }
            flag = 1; 
            printf("%d\t", num[i]);
        }
    }

    if (flag == 0)
    {
        printf("\nThere are no number disvisible by %d",k);
    }
    
    getch();
    return 0;
}