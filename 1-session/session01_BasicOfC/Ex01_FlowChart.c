/*
  Assignment operator: (=) toán tử gán
  Trái (Ghi) = Phải (Đọc)
*/


#include<stdio.h>
#include<conio.h>

int main()
{
  /*
    Commment - Chú thích :
    Begin | Start | Bắt đầu  
  */ 

  // Bước chuẩn bị 
  int a, b, c;

  // Bước 1 : input A, B
  a = 10;
  b = 11;

  // Bước 2 : C = A + B
  c = a + b;

  // Bước 3 : Display C
  printf("Sum of %d and %d is %d", a, b, c);
  getch();

  // End | Stop | Kết thúc
  return 0;
}