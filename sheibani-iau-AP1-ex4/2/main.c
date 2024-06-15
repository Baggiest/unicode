#include <stdio.h>

// Structure to represent a fraction
typedef struct {
    int s;
    int m;
} Fraction;

// Function prototypes
Fraction addFractions(Fraction f1, Fraction f2);
Fraction subtractFractions(Fraction f1, Fraction f2);
Fraction divideFractions(Fraction f1, Fraction f2);

void printFraction(Fraction f);
int bmm(int a, int b);

int main() {
    Fraction f1, f2, result;

    // Read the first fraction
    printf("Enter the s and m of the first fraction: ");
    scanf("%d%d", &f1.s, &f1.m);

    // Read the second fraction
    printf("Enter the s and m of the second fraction: ");
    scanf("%d%d", &f2.s, &f2.m);

    // Add the fractions
    result = addFractions(f1, f2);
    printf("Sum: ");
    printFraction(result);

    // Subtract the fractions
    result = subtractFractions(f1, f2);
    printf("Difference: ");
    printFraction(result);

    // Divide the fractions
    result = divideFractions(f1, f2);
    printf("Quotient: ");
    printFraction(result);

    return 0;
}
Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.s = f1.s * f2.m + f2.s * f1.m;
    result.m = f1.m * f2.m;

    // Simplifying
    int commonDivisor = bmm(result.s, result.m);
    result.s /= commonDivisor;
    result.m /= commonDivisor;
    return result;
}

Fraction subtractFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.s = f1.s * f2.m - f2.s * f1.m;
    result.m = f1.m * f2.m;
    // Simplify the fraction
    int commonDivisor = bmm(result.s, result.m);
    result.s /= commonDivisor;
    result.m /= commonDivisor;
    return result;
}
Fraction divideFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.s = f1.s * f2.m;
    result.m = f1.m * f2.s;
    // Simplify the fraction
    int commonDivisor = bmm(result.s, result.m);
    result.s /= commonDivisor;
    result.m /= commonDivisor;
    return result;
}

void printFraction(Fraction f) {
    printf("%d/%d\n", f.s, f.m);
}

int bmm(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
