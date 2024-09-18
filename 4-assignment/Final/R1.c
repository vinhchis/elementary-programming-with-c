#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() {
    int n, base, count = 0;
    int temp = n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while(temp){
        temp = temp / 10; 
        count++;
    }

    // base = n / (10^x) % 10
    for (int i = 0; i < count; i++)
    {
        base = (int)(n / pow(10,i)) % 10; 
        temp += pow(base,count);
    }

    if (temp = n)
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else{
        printf("%d is not an Armstrong number\n", n);
    }

  getch();
  return 0;
} 
