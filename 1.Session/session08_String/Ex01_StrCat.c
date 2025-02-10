#include<stdio.h>
#include<string.h>
/*
    - Không dùng gets() vì có thể gây tràn bộ nhớ
    - Sử dụng fgets() thay thế. Tuy nhiên, cần xóa kí tự cuối cùng nếu cần.
*/

int main(){
    // Khai báo chuỗi s1, s2
    char s1[100], s2[100];

    // Nhập giá trị 2 chuỗi
    printf("Enter s1: ");
    fgets(s1, sizeof(s1), stdin);
    // Loại bỏ ký tự '\n' thừa nếu có
    s1[strcspn(s1, "\n")] = '\0';
    printf("Enter s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';


    // Hiển thị s1 và s2 trước khi gọi hàm
    printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);

    // Gọi hàm strcat()
    strcat(s1, s2);

    // Hiển thị s1 và s2 sau khi gọi hàm
    printf("After using strcat(s1, s2)\n");
    printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);


    return 0;
}