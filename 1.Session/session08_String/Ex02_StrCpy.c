#include <stdio.h>
#include <string.h>
/*

*/
int main()
{
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

    // Gọi hàm strcpy()
    strcpy(s1, s2);

    // Hiển thị s1 và s2 sau khi gọi hàm
    printf("After using strcpy(s1, s2)\n");
    printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);

    return 0;
}