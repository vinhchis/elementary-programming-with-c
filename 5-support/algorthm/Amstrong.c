#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>
/*
    [1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474]
    Số Amstrong : 
        n = d₁^m + d₂^m + ... + dₘ^m
        Trong đó, d₁, d₂,..., dₘ là các chữ số của số n, và m là số chữ số của n.

        + 371 = (3 * 3 * 3) + (7 * 7 * 7) + (1 * 1 * 1)  
        Ở đây:
            (3 * 3 * 3) = 27  
            (7 * 7 * 7) = 343  
            (1 * 1 * 1) = 1  
            Vì thế:  
            27 + 343 + 1 = 371 

        + 9474 
        9^4 + 4^4 + 7^4 + 4^4 = 6561 + 256 + 2401 + 256 = 9474

*/

int countDigit(int n)
{
    int count = 0;
    while(n){
        n = n / 10; 
        count++;
    }
    return count;
}

bool amstrong(int n){
    int base, count;
    int temp = 0;

    count = countDigit(n);

    // base = n / (10^x) % 10
    for (int i = 0; i < count; i++)
    {
        base = (int)(n / pow(10,i)) % 10; 
        temp += pow(base,count);
    }

    if (temp == n)
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (amstrong(n))
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else{
        printf("%d is not an Armstrong number\n", n);
    }
    
    getch();
    return 0;
}