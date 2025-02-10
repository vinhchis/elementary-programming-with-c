#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int findLCM(int a, int b){
    return a * b / findGCD(a, b);
}


typedef struct {
    int n; // n: Numerator
    int d; // d: Denominator
} Fraction;

Fraction phepTinh(Fraction f1, Fraction f2, char op){
    Fraction f;
    switch (op)
    {
        case '+': // f1 + f2
            f.n = f1.n * f2.d + f2.n * f1.d;
            f.d = f1.d * f2.d;
            break;
        case '-': // f1 - f2
            f.n = f1.n * f2.d - f2.n * f1.d;
            f.d = f1.d * f2.d;
            break;
        case '*': // f1 * f2
            f.n = f1.n * f2.n;
            f.d = f1.d * f2.d;
            break;
        case '/': // f1 / f2
            f.n = f1.n * f2.d;
            f.d = f1.d * f2.n;
            break;
        default:
            printf("\nOperator is not valid!.");
            break;
    }
    return f;
}

void displayFraction(Fraction f){
    printf("%d / %d \n", f.n, f.d);
}

void simplifyFraction(Fraction *f){
    int gcd;
    gcd = findGCD(f->n, f->d);
    f->n = f->n / gcd;
    f->d = f->d / gcd;
}

void denominateTwoFraction(Fraction *f1, Fraction *f2)
{
    int lcm;
    lcm = findLCM(f1->d, f2->d);

    f1->n = f1->n * (lcm / f1->d);
    f1->d = lcm;

    f2->n = f2->n * (lcm / f2->d);
    f2->d = lcm;

}

void compareFractions(Fraction f1, Fraction f2){
    denominateTwoFraction(&f1, &f2);
    if(f1.n > f2.n){
        printf("\nF1 > F2");
    } else if (f1.n < f2.n){
        printf("\nF1 < F2");
    }
    else{
        printf("\nF1 = F2");
    }
}

int main()
{
    Fraction f1 = {4, 2};
    Fraction f2 = {3, 10};

    displayFraction(f1);
    displayFraction(f2);
    // Fraction f;
    // f = phepTinh(f1, f2, '+');
    // displayFraction(f);
    // simplifyFraction(&f);
    // displayFraction(f);

    // denominateTwoFraction(&f1, &f2);
    // displayFraction(f1);
    // displayFraction(f2);

    compareFractions(f1, f2);

    getch();
    return 0;   
}