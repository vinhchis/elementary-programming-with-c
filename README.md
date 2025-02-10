# Logic Building and Elementary Programming 
- Hiểu và phát triển logic lập trình. Nắm được các cấu trúc trong lập trình, các thuật toán cơ bản và áp dụng để viết các chương trình bằng ngôn ngữ lập trình C.
# Tools 
- DEV-C++ 6.x
- VSCode with C/C++ Extension
# Install
Compiler
- `GCC` - GNU C Compiler
- `G++` - GNU C++ Compiler

Debugger
- `GDB` - GNU Debugger

# Sự khác biệt giữa gcc và g++:
## gcc (GNU C Compiler):
- Được thiết kế chủ yếu để biên dịch các tệp mã C.
- Có thể biên dịch C++ nếu chỉ định đuôi tệp .cpp hoặc sử dụng tùy chọn cụ thể.
- Cần tùy chọn -lstdc++ để liên kết thư viện C++.

Ví dụ:
`gcc example.cpp -o example -lstdc++`
## g++ (GNU C++ Compiler):
- Được thiết kế chuyên biệt để biên dịch các tệp mã C++.
- Tự động liên kết với thư viện chuẩn C++ (libstdc++).
- Hỗ trợ các tính năng và cú pháp của C++ mà không cần thêm tùy chọn.
Ví dụ:
`g++ example.cpp -o example`

Khi nào gcc có thể thay thế g++?
- Nếu bạn đang làm việc với mã C++, bạn có thể sử dụng gcc, nhưng bạn cần:
- Thêm cờ -lstdc++ để liên kết thư viện C++.
- Xác định tệp đầu vào là tệp C++ (đuôi .cpp).

Ví dụ:
`gcc example.cpp -o example -lstdc++`

Khi nào nên dùng g++?
- Khi làm việc với mã C++, tốt nhất là sử dụng g++ vì:
- Nó được tối ưu hóa cho C++.
- Tự động liên kết với các thư viện chuẩn C++.
- Ít lỗi phát sinh hơn khi làm việc với các tính năng nâng cao của C++.
## math.h
- thư viện `math.h` chỉ định nghĩa hàm
- Cần thư viện liên kết (`libm.a`) để chương trình hoạt động.

Dùng `gcc` để biên dịch
`gcc <file.c> -o <object> -lm`

***Có thể dùng `g++` thay thế `gcc` mà không cần liên kết ***

# Thay đổi quan trọng
## Không dùng getc() vì gây tràn bộ nhớ
1. Dùng `scanf`
2. Dùng `fgets`


```C
    char s1[20];
    //1. scanf
    scanf("%s", &s1);

    // 2. fgets
    fgets(s1, sizeof(s1), stdin);
    //Loại bỏ ký tự '\n' thừa nếu có
    s1[strcspn(s1, "\n")] = '\0';
```
## Nếu không thể dùng `__flushall()` 
> Xóa tứ tự đã lưu vào buffer ở lần nhập trước , trước khi nhập
1. Dùng `fflush(stdin)`
2. Dùng `getchar` để xóa đi kí tự cuối cùng.

```C
 while (getchar() != '\n' && getchar() != EOF);
```

## _exit(0)

```C
_exit(0); // #include<unistd.h>
```

##  system("clear") để xóa console
