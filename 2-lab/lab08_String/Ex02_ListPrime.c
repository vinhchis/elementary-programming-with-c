#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>
/*
    - B1: Nếu số đó bé hơn 2, kết luận không phải số nguyên tố.
    - B2: Đếm số ước của x trong đoạn từ 2 đến căn bậc hai của x. 
        Nếu số đó không có ước nào trong đoạn từ 2 đến căn bậc hai của x thì nó là số nguyên tố. Ngược lại thì không phải. 
        Như vậy, nếu bạn đếm từ 1 thay vì 2 thì x là số nguyên tố khi ta đếm được 1 ước số trong đoạn từ 1 đến căn bậc hai của x.
*/
bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i=2; i < sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

void listPrime(int n)
{
    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            printf("%4d", i);
        }
    }
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    listPrime(n);
   
    getch();
    return 0;
}