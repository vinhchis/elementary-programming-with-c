#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    // 1. Control string is required
    printf("Control string is required");
    // 2. The argument list consists of constants
    printf("\nThe argument list consists of:\n+ Constant (100): %d", 3.14);

    // 3. The argument list consists of variables
    float pi = 3.14;
    printf("\n+ Variable (pi): %f", pi);

    // 4. The argument list consists of expressions
    printf("\n+ Expression (pi*2*10): %f", pi * 2 * 10);

    // 5. The argument list consists of funtions
    printf("\n+ Function (pi^2): %d", pow(pi,2));

    // 6. Summary
    printf("\n* Constant (100), Variable (pi), Expression (pi*2*10), Function (pi^2): %d, %f, %f, %d",
            100, pi, pi * 2 * 10, pow(pi,2));

    getch();
    return 0;
}