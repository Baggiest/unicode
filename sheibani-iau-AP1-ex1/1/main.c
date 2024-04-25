// Exc1-1 Given a whole number in base 10 return the number in base 2

#include <stdio.h>

int main()

{
    int inputNum, binary[64];
    // allocating 64 'cause we havent learned dynamic programming yet

    printf("Enter a whole number: ");
    scanf("%d", &inputNum);
    // getting the input arguments

    int i = 0;
    while (inputNum > 0)
    {
        binary[i] = inputNum % 2;
        inputNum /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    
    printf("\n");
}