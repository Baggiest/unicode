// exc3 write a non recursive program to find the power of a number

#include <stdio.h>

int main()
{
    // input 2 numbers one named number and one named power
    int number, power, result;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the power: ");
    scanf("%d", &power);

    result = toPow(number, power);
    printf("Result: %d", result);
}

int toPow(int number, int power)
{
    int i, output;
    output = number;

    if (power == 0)
    {
        return 1;
    }

    for (i = 0; i < power - 1; i++) // i have no idea why this needs power - 1
    {
        output *= number;
    }

    return output;
}
