#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    // Character Pointer to store Sentence 's'
    char *s;
    // Allocate memory for the Input string
    s = malloc(1024 * sizeof(char));
    // Read the Input String Including Spaces until newline
    scanf("%[^/n]", s);
    // Reallocate memory to fit the actual length of the string
    s = realloc(s, strlen(s) + 1);


    // MAIN LOGIC
    // Tokenize the string and print each word in a new line
    // We use 'strtok()' to split the string into tokens 
    char *token = strtok(s, " ");
    // Print Each token and then call 'strtok()' again with NULL to get the next token until no more tokens are found
    while (token != NULL) {
        printf("%s\n", token);

        token = strtok(NULL, " ");
    }
    

    // Free the allocated memory
    free(s);
    return 0;
}
