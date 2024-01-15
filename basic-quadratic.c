#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("You have an equation that looks like\n Ax^2 + Bx + C");

    printf("\nEnter the value of A: ");
    scanf("%d", &a);

    printf("\nEnter the value of B: ");
    scanf("%d", &b);

    printf("\nEnter the value of C: ");
    scanf("%d", &c);

    double delta = b * b - (4 * a * c);

    if (delta > 0)
    {
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    }

    else if (delta == 0)
    {
        double root = -b / (2 * a);
        printf("Root: %.2lf\n", root);
    }
    else
    {
        printf("no real solution");
    }

    return 0;
}