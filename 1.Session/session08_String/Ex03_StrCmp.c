#include<stdio.h>
#include<string.h>
/*

*/
int main(){
    // Khai báo chuỗi s1, s2
    char s1[100], s2[100];

    // Nhập giá trị 2 chuỗi
     printf("Enter s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';


    printf("Enter s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    // Hiển thị s1 và s2 trước khi gọi hàm
    printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);

    // Gọi hàm strcmp()
    int value;
    value = strcmp(s1, s2);

    // Hiển thị s1 và s2 theo thứ tự
    printf("Order [s1 - s2] ASC \n");
    if(value > 0){
        printf("s2 = \"%s\" > s1 = \"%s\"\n", s2, s1);
    }
    else if(value < 0)
    {
        printf("s1 = \"%s\" < s2 = \"%s\"\n", s1, s2);
    }
    else {
        printf("s1 = s2 = \"%s\"\n", s1);
    }


    return 0;
}