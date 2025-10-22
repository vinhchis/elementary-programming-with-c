#include<stdio.h>

int main()
{
  int a, b, sum = 0;
  printf("Enter A: ");
  scanf("%d", &a);
  printf("Enter B: ");
  scanf("%d", &b);

  sum = a + b;
  printf("%d + %d = %d\n", a ,b, sum);
  return 0;

}