# Logic Building and Elementary Programming
Understand and develop programming logic. Learn common programming structures, basic algorithms, and apply them to write programs in the C language.

# Tools
- DEV-C++ 6.x
- VS Code with C/C++ extension

# Installation / Compilers
Compiler:
- `gcc` — GNU C Compiler
- `g++` — GNU C++ Compiler

Debugger:
- `gdb` — GNU Debugger

# Difference between gcc and g++
## gcc (GNU C Compiler)
- Primarily for compiling C source files.
- Can compile C++ files if the file extension is `.cpp` or proper flags are used.
- Does not automatically link the C++ standard library; you must add `-lstdc++` when compiling C++ code.

Example:
```bash
gcc example.cpp -o example -lstdc++
```

## g++ (GNU C++ Compiler)
- Designed for compiling C++ source files.
- Automatically links the C++ standard library (`libstdc++`).
- Recommended for compiling C++ code.

Example:
```bash
g++ example.cpp -o example
```

When to use which:
- Use `g++` for C++ code (it handles linking and C++ features automatically).
- `gcc` can compile `.cpp` files but needs `-lstdc++` to link C++ standard library.

## math.h and linking libm
- `math.h` declares math functions; the math library may need to be linked (libm).
Example with `gcc`:
```bash
gcc file.c -o program -lm
```
(g++ can be used instead and usually doesn't require `-lm` explicitly for the same functions.)

# Common utilities and guidance
## conio.h
- `conio.h` is outdated (functions like `getch()`, `getche()`).
- Prefer standard functions like `scanf`, `fgets`, etc.

## Reading input
1. `scanf` — reads input up to whitespace.
2. `fgets` — reads a full line (including newline).

Example:
```c
char s1[20];

// 1. scanf (reads until space)
scanf("%19s", s1);

// 2. fgets (reads a whole line)
fgets(s1, sizeof(s1), stdin);
// remove trailing newline if present
s1[strcspn(s1, "\n")] = '\0';
```
Notes: use size-limited formats (e.g. `%19s`) to avoid buffer overflow.

## Clearing the input buffer
To discard leftover input before the next read:
- `getchar()` can help remove the last character.
- `fflush(stdin)` is undefined behavior in standard C (works in some compilers only).

Safer approach:
```c
int c;
while ((c = getchar()) != '\n' && c != EOF) { }
```

## Exiting a program (POSIX)
```c
#include <unistd.h>
_exit(0);
```

## Clearing the terminal
```c
system("clear"); // on Unix-like systems
// system("cls"); // on Windows
```

# Common headers
- `stdio.h` — standard I/O (almost always needed)
- `string.h` — string handling functions
- `math.h` — mathematical functions
- `unistd.h` — POSIX API (process control, read/write, etc.)

# Tips
- Always validate inputs and use size limits for buffers.
- Prefer standard and portable APIs where possible.
- Use compiler warnings (`-Wall -Wextra`) to catch potential issues early.