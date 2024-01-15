#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    char operation;

    printf("\nEnter the first number: ");
    scanf("%lf", &num1);

    printf("Choose your operation (+, -, *, /, s, c): ");
    scanf(" %c", &operation);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operation)
    {
    case '+':
        printf("Result: %lf\n", num1 + num2);
        break;

    case '-':
        printf("Result: %lf\n", num1 - num2);
        break;

    case '*':
        printf("Result: %lf\n", num1 * num2);
        break;

    case '/':
        if (num2 != 0)
        {
            printf("Result: %.4lf", num1 / num2);
        }
        else
        {
            printf("Error\n");
            return 1;
        }

        break;

    case 's':
        printf("Sin of number 1 is: %lf\n", sin(num1));
        printf("Sin of number 2 is: %lf\n", sin(num2));
        break;

    case 'c':
        printf("Cosine of number 1 is: %lf\n", cos(num1));
        printf("Cosine of number 2 is: %lf\n", cos(num2));
        break;

    default:
        printf("Error: Invalid operation\n");
    }

    return 0;
}
