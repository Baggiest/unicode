#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("You have an equation that looks like Ax² + Bx + C\n\n");

    printf("Enter the value of A: ");
    scanf("%d", &a);

    printf("Enter the value of B: ");
    scanf("%d", &b);

    printf("Enter the value of C: ");
    scanf("%d", &c);

    printf("\nYour equation is %dx² + %dx + %d\n", a, b, c);

    if (a == 0 || b == 0)
    {
        printf("Error, invalid equation");
        return 0;
    }

    double delta = b * b - (4 * a * c);
    if (delta > 0)
    {
        float x1 = ((-b + sqrt(delta))) / (2 * a);
        float x2 = ((-b - sqrt(delta))) / (2 * a);

        printf("\nRoot 1\t Root 2\n");
        printf("%.2f\t %.2f\n\n", x1, x2);
    }

    else if (delta == 0)
    {
        float x = -b / (2 * a);
        printf("\nThe single root: %.2f\n", x);
    }
    else
    {
        printf("\nDoesnt have a real solution\n");
    }

    return 0;
}