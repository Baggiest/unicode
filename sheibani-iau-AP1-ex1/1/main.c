// Exc1-1 Given a whole number in base 10 return the number in base 2

#include <stdio.h>

int main()

{
    int inputNum;
    int dividable = 1;
    // using int instead of bool to avoid importing unnecessary stdbool.h

    printf("Enter a whole number: ");
    scanf("%d", &inputNum);
    // getting the input arguments

    int *output;

    int i = 0;
    while (dividable)
    {
        if (inputNum == 0)
        {
            dividable = 0;
            break;
            // first line sets dividable to false
            // the break line prevents the cycle from running the rest of the while loop
            // break isnt necessary but without it our base 2 output would begin with a 0 as its MSB
        }

        printf("%d\t %d \n", inputNum / 2, inputNum % 2);
        // printf("%d", inputNum % 2);
        // output[i++] = inputNum % 2;
        
        printf("\n%d\n" , i++);
        inputNum /= 2;
    }
    printf("your string output is %s", output);
}