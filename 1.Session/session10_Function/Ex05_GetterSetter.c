#include<stdio.h>
#include<stdbool.h>

int n;
int getVal(){
    return n;
}

void setVal(int x){
    n = x;
}

int main()
{
    setVal(12);
    printf("N: %d\n", getVal());
    
  
    return 0;
}

