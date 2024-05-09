// Exc 2-1 Given an input of array of numbers, store them at heap storage
// print average, minimum and maximum of the array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input, arrLen;
    float max, min, sum, avg = 0;

    int i, j, k, n;
    int getInput = 1;

    float *inputArray;
    inputArray = (float *)malloc(sizeof(float));

    printf("press the number -1 once you're done \n");

    while (getInput)
    {
        printf("enter the [%d] number: ", i);
        scanf("%.2f", &input);

        if (input == -1)
        {
            break;
        }

        *(inputArray + i) = input;
        printf("%.2f \n", *(inputArray + i));
        i++;
    }

    arrLen = i;
    max = *(inputArray);
    min = *(inputArray);

    for (j = 0; j < arrLen; j++)
    {

        if (*(inputArray + j + 1) > max)
        {
            max = *(inputArray + j + 1);
        }

        // printf("index[%d]: %d\n", j, *(inputArray + j));
    }
    printf("Maximum: %.2f \n", max);

    for (k = 0; k < arrLen; k++)
    {

        if (*(inputArray + k) < min)
        {
            min = *(inputArray + k);
        }
    }
    printf("Minimum: %.2f \n", min);

    for (n = 0; n < arrLen; n++)
    {
        sum += *(inputArray + n);
    }
    printf("Average: %.2f \n", sum / arrLen);
}
