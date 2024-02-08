#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Make a stand-alone and self-contained function like strtok to split a string using a delimiter which is one character.*/

// Custom string split function
char *str_split(char *str, char delimiter) {
    static char *nextToken = NULL; // To keep track of the next token

    // If a new string is provided, update the nextToken
    if (str != NULL) {
        nextToken = str;
    }

    // If nextToken is NULL, return NULL to indicate no more tokens
    if (nextToken == NULL) {
        return NULL;
    }

    // Find the position of the next delimiter or end of string
    char *end = strchr(nextToken, delimiter);

    // If delimiter is found, replace it with '\0' and update nextToken
    if (end != NULL) {
        *end = '\0';
        end++;
        nextToken = end;
    } else {
        // If delimiter is not found, set nextToken to NULL for the next iteration
        nextToken = NULL;
    }

    return nextToken - 1; // Return the start of the current token
}

int main() {
    // Example usage
    char input[] = "apple,orange,banana";
    char *token;

    // Split the string using ',' as a delimiter
    token = str_split(input, ',');
    
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = str_split(NULL, ','); // Pass NULL to get the next token
    }

    return 0;
}