#include<stdio.h>
#include<conio.h>
/*
    int n[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        if(n[i] % 2 ==0)
        {
            n[i]++;
            printf("%d", n[i]);
        }else{
            n[i]--;
            printf("%d", n[i]);
        }
    }

    | i  | n[i] |n[i] % 2  | n[i]++ or n[i]--
    |  0 |  1   |   1      | 1-- = 0
    |  1 |  2   |   0      | 2++ = 3
    |  2 |  3   |   1      | 3-- = 2
    |  3 |  4   |   0      | 4++ = 5
    |  4 |  5   |   1      | 5-- = 4
    => (1--)(2++)(3--)(4++)(5--) = 03254

*/
int main()
{
    int n[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        if(n[i] % 2 ==0)
        {
            n[i]++;
            printf("%d", n[i]);
        }else{
            n[i]--;
            printf("%d", n[i]);
        }
    }

    getch();
    return 0;
}