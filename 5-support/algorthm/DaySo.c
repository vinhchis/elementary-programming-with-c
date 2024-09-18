#include<stdio.h>
#include<conio.h>
/*
    0, 1, 3, 6, 10, 15, 21
*/
void daySo(int max){
    int i = 0,num =0;
    do{
        num += i;
        if(num <= max)
        {
            printf("%d,\t", num);
        }
        i ++;
    } while(num < max);

    if (num != max){
        printf("..%d,\t", max);
    }
}

int main()
{
    int max;
    printf("Enter Max of N: ");
    scanf("%d",&max);

    daySo(max);

  
    getch();
    return 0;
}