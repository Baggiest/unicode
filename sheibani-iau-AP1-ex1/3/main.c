// Exc1-3 Given a string input, return the length of the said input, without using the strlen() function

#include <stdio.h>

int main()
{

    int i = 0;
    // we'll use this to iterate through the input array
    int length = 0;
    // this is the output
    char inputString[100];
    // hard-coding the length of the array because im still bad at the pointer array thingy 

    printf("Enter your string: ");
    scanf("%s", &inputString);
    // gets the user input arguments

    while (1)
    {
        if (inputString[i] == NULL) 
        // If we reach the end of the array this statement becomes true it will break this "forever running" loop
        {
            break;
        }

        else
        // Otherwise we just go to the next element of the array and add one to our output value
        {
            i++;
            length++;
        }
    }
    printf("The length of your string is %d \n", length);
    // And this doesn't handle spaces so... i hope it wasnt a requirement 
}