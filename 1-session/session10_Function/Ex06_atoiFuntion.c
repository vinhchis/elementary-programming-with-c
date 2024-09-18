#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    char n1[100], n2[100];
    int sum;

    printf("Enter number no.1: ");
    gets(n1);
    printf("Enter number no.2: ");
    gets(n2);

    sum = atoi(n1) + atoi(n2);

    printf("\n%s has %d characters and %s has %d characters.\n", n1, strlen(n1), n2, strlen(n2));
    printf("\nSum of %s and %s: %d", n1, n2, sum);   
  
    getch();
    return 0;
}

