#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *input, *output;
    int i, j, len;

    // Get the input string from the user
    printf("Enter a string: ");
    input = malloc(100);
    scanf("%s", input);

    len = strlen(input);
    output = malloc(len);

    // this just doesnt work with blanks and whitespaces 
    // idk what to do 
    
    j = 0;
    for (i = 0; i < len; i++) {
        if (input[i] != ' ' && (input[i] < '0' || input[i] > '9')) {
            output[j++] = input[i];
        }
    }

    // Print the output string
    printf("Your output is: %s \n", output);

    free(input);
    free(output);

    return 0;
}
