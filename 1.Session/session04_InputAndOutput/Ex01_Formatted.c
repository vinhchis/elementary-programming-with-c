#include<stdio.h>
#include<math.h>

int main()
{
    // 1. Control string is required
    printf("Control string is required");
    // 2. The argument list consists of constants
    printf("\nThe argument list consists of:\n+ Constant (100): %d\n", 3.14);

    // 3. The argument list consists of variables
    float pi = 3.14;
    printf("+ Variable (pi): %f\n", pi);

    // 4. The argument list consists of expressions
    printf("+ Expression (pi*2*10): %f\n", pi * 2 * 10);

    // 5. The argument list consists of funtions
    printf("+ Function (pi^2): %d\n", pow(pi, 2));

    // 6. Summary
    printf("* Constant (100), Variable (pi), Expression (pi*2*10), Function (pi^2): %d, %f, %f, %d\n",
            100, pi, pi * 2 * 10, pow(pi,2));

    return 0;
}