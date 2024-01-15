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
        double x1 = ((-b + sqrt(delta))) / (2 * a);
        double x2 = ((-b - sqrt(delta))) / (2 * a);

        printf("Root 1\t Root 2\n");
        printf("%.1lf\t %.1lf", x1, x2);
    }

    else if (delta == 0)
    {
        double x = -b / (2 * a);
        printf("The single root: %.2lf\n", x);
    }
    else
    {
        printf("Doesnt have a real solution");
    }

    return 0;
}