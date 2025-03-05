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

# Utils
## conio.h 
> nó đã quá cũ để dùng (`getch()`, `getche()` ,..) . Thay vào đó dùng các hàm mới như `scanf` hay `fgets`, .. 
## Đọc dữ liệu
1. `scanf` : đọc đến space
2. `fgets` : đọc 1 line

*** Không dùng getc() vì gây tràn bộ nhớ ***
```C
    char s1[20];
    //1. scanf
    scanf("%s", &s1);

    // 2. fgets
    fgets(s1, sizeof(s1), stdin);
    //Loại bỏ ký tự '\n' thừa nếu có
    s1[strcspn(s1, "\n")] = '\0';
```
## Buffer
> Xóa tứ tự đã lưu vào buffer ở lần nhập trước , trước khi nhập
1. `getchar()` : để xóa đi kí tự cuối cùng.
2. `fflush(stdin)` : tùy vào compiler 
*** `__flushall()` not support ***

**Cách an toàn nhất:**
```C
 // Remove a last character from input('\n',..)
 while (getchar() != '\n' && getchar() != EOF);
```

## _exit(0)
> terminal program
```C
_exit(0); // #include<unistd.h>
```

##  system("clear") để xóa console

# Thư viện hay dùng
- `stdio.h` : thư viện tiêu chuẩn, hầu như cho bất cứ file nào
- `string.h` : hàm về chuỗi kí tự
- `math.h` : cung cấp các hàm toán học
- `unistd.h` : điều hường chương trình
-