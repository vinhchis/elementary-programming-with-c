#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100];
    int sum;

    printf("Enter number no.1: ");
    scanf("%s", &s1);
    printf("Enter number no.2: ");
    scanf("%s", &s2);
    

    sum = atoi(s1) + atoi(s2);

    printf("%s has %d characters and %s has %d characters.\n", s1, strlen(s1), s2, strlen(s2));
    printf("Sum of %s and %s: %d\n", s1, s2, sum);

    return 0;
}
