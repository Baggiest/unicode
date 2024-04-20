// Exc1-2 Given no input, simply write a program that displays a diagnol matrices

#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                printf("1 \t");
            }
            else
            {
                printf("0 \t");
            }
        }
        printf("\n");
    }
}