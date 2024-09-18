#include<stdio.h>
#include<conio.h>

int main()
{
  int a, b, sum =0;
  printf("Enter A:");
  scanf("%d", &a);
  printf("Enter B:");
  scanf("%d", &b);

  sum = a + b;
  printf("%d + %d = %d", a ,b, sum);
  getch();
  return 0;

}