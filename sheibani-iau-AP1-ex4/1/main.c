// 1- Write a c program using structures that reads the coefficients and exponents of two polynomials with a maximum power of 10 from the input and adds these two polynomials together. add and then print the result in the output.

#include <stdio.h>
#include <stdlib.h>

#define MAX_POWER 10

// Structure to represent a polynomial term
typedef struct
{
    int mul;
    int pow;
} Term;

// Structure to represent a polynomial
typedef struct
{
    Term terms[MAX_POWER + 1]; // Terms for each exponent from 0 to MAX_POWER
} Polynomial;

// Function prototypes
void readPolynomial(Polynomial *p);
Polynomial addPolynomials(Polynomial *p1, Polynomial *p2);
void printPolynomial(Polynomial *p);

int main()
{
    Polynomial p1, p2, result;

    printf("Enter the first polynomial:\n");
    readPolynomial(&p1);

    printf("Enter the second polynomial:\n");
    readPolynomial(&p2);

    result = addPolynomials(&p1, &p2);

    printf("The resulting polynomial is:\n");
    printPolynomial(&result);

    return 0;
}

// Function to read a polynomial
void readPolynomial(Polynomial *p)
{
    for (int i = 0; i <= MAX_POWER; i++)
    {
        p->terms[i].pow = i;
        printf("Enter the mul for x^%d: ", i);
        scanf("%d", &(p->terms[i].mul));
    }
}

Polynomial addPolynomials(Polynomial *p1, Polynomial *p2)
{
    Polynomial result;
    for (int i = 0; i <= MAX_POWER; i++)
    {
        result.terms[i].pow = i;
        result.terms[i].mul = p1->terms[i].mul + p2->terms[i].mul;
    }
    return result;
}

// Function to print a polynomial
void printPolynomial(Polynomial *p)
{
    int first = 1;
    for (int i = MAX_POWER; i >= 0; i--)
    {

        if (p->terms[i].mul != 0)
        {
            if (!first && p->terms[i].mul > 0)
            {
                printf(" + ");
            }
            else if (p->terms[i].mul < 0)
            {
                printf(" - ");
            }

            if (p->terms[i].mul != 1 && p->terms[i].mul != -1 || i == 0)
            {
                printf("%d", abs(p->terms[i].mul));
            }

            if (i > 0)
            {
                printf("x");
                if (i > 1)
                {
                    printf("^%d", i);
                }
            }

            first = 0;
        }
    }
    printf("\n");
}
