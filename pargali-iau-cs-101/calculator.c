//                                     Mani Ehsani Sohi 
#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;

    printf("Choose your operation\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Sin\n");
    printf("6. Cosin\n");
    printf("7. Inverse Sin\n");
    printf("8. Inverse Cosin\n");
    printf("Please enter your choice (1-8): ");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        result = num1 + num2;
        break;

    case 2:
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        result = num1 - num2;
        break;

    case 3:
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        result = num1 * num2;
        break;

    case 4:
        printf("Enter the dividend and divisor: ");
        scanf("%lf %lf", &num1, &num2);
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Error: cant divide zero by zero!\n");
            return 0;
        }
        break;

    case 5:
        printf("Enter your value in radians: ");
        scanf("%lf", &num1);
        result = sin(num1);
        break;

    case 6:
        printf("Enter your value in radians: ");
        scanf("%lf", &num1);
        result = cos(num1);
        break;

    case 7:
        printf("Enter your value (between -1 and 1): ");
        scanf("%lf", &num1);
        if (num1 >= -1 && num1 <= 1)
        {
            result = asin(num1);
        }
        else
        {
            printf("Error: value should be between -1 and 1 for arcsin\n");
            return 0;
        }
        break;

    case 8:
        printf("Enter your value (between -1 and 1): ");
        scanf("%lf", &num1);

        if (num1 >= -1 && num1 <= 1)
        {
            result = acos(num1);
        }
        else
        {
            printf("Error: value should be between -1 and 1 for arccos\n");
            return 0;
        }
        break;

    default:
        printf("Error\n");
        return 0;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
